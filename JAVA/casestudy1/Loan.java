package casestudy1;

public class Loan extends Account {
    public Loan(long acNumber, String acHolderName, double loanAmount) {
        super(acNumber, acHolderName, -loanAmount);
    }

    @Override
    public double calculateInterest() {
        return Math.abs(balance) * 0.08; // 8% loan interest
    }
}

