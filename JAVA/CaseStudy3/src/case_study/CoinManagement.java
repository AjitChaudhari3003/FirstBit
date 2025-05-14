
package case_study;

import java.io.*;
import java.sql.*;
import java.util.*;

public class CoinManagement {
    private List<Coin> coinList = new ArrayList<>(); // In-memory coin list
    private int nextCoinId = 1; // To generate unique IDs

    // Load existing coins from the database into the ArrayList
    public void loadFromDatabase() {
        try (Connection conn = DatabaseUtil.getSQLConnection();
             Statement stmt = conn.createStatement();
             ResultSet rs = stmt.executeQuery("SELECT * FROM coins")) {

            int maxId = 0;
            while (rs.next()) {
                int coinId = rs.getInt("coin_id");
                Coin coin = new Coin(
                    coinId,
                    rs.getString("country"),
                    rs.getDouble("denomination"),
                    rs.getInt("year_of_minting"),
                    rs.getDouble("current_value"),
                    rs.getString("acquired_date")
                );
                coinList.add(coin);
                if (coinId > maxId) {
                    maxId = coinId;
                }
            }
            nextCoinId = maxId + 1;
            System.out.println("Data loaded from database.");
        } catch (Exception e) {
            System.out.println("Error loading from DB: " + e.getMessage());
        }
    }

    // Add a coin manually (assigns unique ID)
    public void addCoin(Coin coin) {
        coin.setCoinId(nextCoinId++);
        coinList.add(coin);
        System.out.println("Coin added successfully with ID: " + coin.getCoinId());
    }

    // Bulk upload coins from a file (assigns unique IDs)
    public void bulkUpload(String filename) {
        try (BufferedReader reader = new BufferedReader(new FileReader(filename))) {
            String line;
            while ((line = reader.readLine()) != null) {
                String[] data = line.split(",");
                Coin coin = new Coin(
                        nextCoinId++, // assign unique ID
                        data[0],
                        Double.parseDouble(data[1]),
                        Integer.parseInt(data[2]),
                        Double.parseDouble(data[3]),
                        data[4]
                );
                coinList.add(coin);
            }
            System.out.println("Bulk upload completed.");
        } catch (Exception e) {
            System.out.println("Error reading file: " + e.getMessage());
        }
    }

    // Search by country
    public void searchByCountry(String country) {
        coinList.stream()
                .filter(c -> c.getCountry().equalsIgnoreCase(country))
                .forEach(System.out::println);
    }

    // Search by year
    public void searchByYear(int year) {
        coinList.stream()
                .filter(c -> c.getYearOfMinting() == year)
                .forEach(System.out::println);
    }

    // Sort by value descending
    public void sortByCurrentValue() {
        coinList.stream()
                .sorted(Comparator.comparingDouble(Coin::getCurrentValue).reversed())
                .forEach(System.out::println);
    }

    // Advanced search
    public void searchSpecific(String country, Double denomination, Integer year, String date) {
        coinList.stream()
                .filter(c -> (country == null || c.getCountry().equalsIgnoreCase(country)) &&
                             (denomination == null || c.getDenomination() == denomination) &&
                             (year == null || c.getYearOfMinting() == year) &&
                             (date == null || c.getAcquiredDate().equals(date)))
                .forEach(System.out::println);
    }

    // Save coinList to database
    public void saveToDatabase() {
        try (Connection conn = DatabaseUtil.getSQLConnection()) {
            PreparedStatement ps = conn.prepareStatement("INSERT INTO coins (coin_id, country, denomination, year_of_minting, current_value, acquired_date) VALUES (?, ?, ?, ?, ?, ?)");

            for (Coin c : coinList) {
                ps.setInt(1, c.getCoinId());
                ps.setString(2, c.getCountry());
                ps.setDouble(3, c.getDenomination());
                ps.setInt(4, c.getYearOfMinting());
                ps.setDouble(5, c.getCurrentValue());
                ps.setString(6, c.getAcquiredDate());

                try {
                    ps.executeUpdate();
                } catch (SQLIntegrityConstraintViolationException dup) {
//                    System.out.println("Skipping duplicate coin ID: " + c.getCoinId());
                }
            }

            System.out.println("Data saved to database.");
        } catch (Exception e) {
            System.out.println("Error saving to DB: " + e.getMessage());
        }
    }

    // Close connection (optional, handled in DatabaseUtil usually)
    public void closeConnection(Connection conn) {
        try {
            if (conn != null) {
                conn.close();
                System.out.println("Connection closed.");
            }
        } catch (SQLException e) {
            System.out.println("Error closing the connection.");
        }
    }
}
