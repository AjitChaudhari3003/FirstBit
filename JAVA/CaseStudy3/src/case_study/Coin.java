package case_study;


public class Coin {
    private int coinId;
    private String country;
    private double denomination;
    private int yearOfMinting;
    private double currentValue;
    private String acquiredDate;

    // Constructor without coin ID (for new coins)
    public Coin(String country, double denomination, int yearOfMinting, double currentValue, String acquiredDate) {
        this.country = country;
        this.denomination = denomination;
        this.yearOfMinting = yearOfMinting;
        this.currentValue = currentValue;
        this.acquiredDate = acquiredDate;
    }

    // Constructor with coin ID (for loading from DB)
    public Coin(int coinId, String country, double denomination, int yearOfMinting, double currentValue, String acquiredDate) {
        this(country, denomination, yearOfMinting, currentValue, acquiredDate);
        this.coinId = coinId;
    }

    public int getCoinId() { return coinId; }
    public String getCountry() { return country; }
    public double getDenomination() { return denomination; }
    public int getYearOfMinting() { return yearOfMinting; }
    public double getCurrentValue() { return currentValue; }
    public String getAcquiredDate() { return acquiredDate; }

    public void setCoinId(int id) {
        this.coinId = id;
    }

    @Override
    public String toString() {
        return "Coin ID: " + coinId + " | " + country + " | " + denomination + " | " + yearOfMinting + " | ₹" + currentValue + " | " + acquiredDate;
    }
}
