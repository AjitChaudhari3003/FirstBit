package casestudy1;

public abstract class Account {
    private long acNumber;
    private String acHolderName;
    protected double balance;

    public Account() {}

    public Account(long acNumber, String acHolderName, double balance) {
        this.acNumber = acNumber;
        this.acHolderName = acHolderName;
        this.balance = balance;
    }

    public long getAcNumber() {
        return acNumber;
    }

    public void setAcNumber(long acNumber) {
        this.acNumber = acNumber;
    }

    public String getAcHolderName() {
        return acHolderName;
    }

    public void setAcHolderName(String acHolderName) {
        this.acHolderName = acHolderName;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposit amount: " + amount + ". After deposit, balance is: " + balance);
    }

    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Withdrawn amount: " + amount + ". After withdrawal, balance is: " + balance);
        } else {
            System.out.println("Insufficient funds.");
        }
    }

    public abstract double calculateInterest();
}


