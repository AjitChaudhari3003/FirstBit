package casestudy1;

public class Saving extends Account {
    private static final double MIN_BALANCE = 10000;

    public Saving(long acNumber, String acHolderName, double balance) {
        super(acNumber, acHolderName, balance);
    }

    @Override
    public void withdraw(double amount) {
        if (balance - amount >= MIN_BALANCE) {
            super.withdraw(amount);
        } else {
            System.out.println("Cannot withdraw. Minimum balance requirement not met.");
        }
    }

    @Override
    public double calculateInterest() {
        return balance * 0.04; // 4% annual interest
    }
}
