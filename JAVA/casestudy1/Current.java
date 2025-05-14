package casestudy1;

public class Current extends Account {
    private double overdraftLimit;

    public Current(long acNumber, String acHolderName, double balance, double overdraftLimit) {
        super(acNumber, acHolderName, balance);
        this.overdraftLimit = overdraftLimit;
    }

    @Override
    public void withdraw(double amount) {
        if (balance - amount >= -overdraftLimit) {
            balance -= amount;
            System.out.println("Withdrawn: " + amount + ", Remaining balance: " + balance);
        } else {
            System.out.println("Exceeded overdraft limit.");
        }
    }

    @Override
    public double calculateInterest() {
        return 0; // Usually, current accounts do not earn interest
    }
}
