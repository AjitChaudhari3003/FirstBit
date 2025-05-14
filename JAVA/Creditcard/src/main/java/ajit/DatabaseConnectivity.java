package ajit;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class DatabaseConnectivity implements Connectivity {
    private static final String DB_URL = "jdbc:mysql://localhost:3306/firstbit";
    private static final String DB_USER = "root";
    private static final String DB_PASS = "Ajit@3003";
    
    @Override
    public boolean isValid(String user, String pass) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            try (Connection con = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
                 PreparedStatement ps = con.prepareStatement(
                     "SELECT * FROM CreditCardDetails WHERE card_holder_name=? AND last_four_digits=?")) {
                
                ps.setString(1, user);
                ps.setString(2, pass);
                
                try (ResultSet rs = ps.executeQuery()) {
                    return rs.next();
                }
            }
        } catch (ClassNotFoundException | SQLException e) {
            e.printStackTrace();
            return false;
        }
    }
}