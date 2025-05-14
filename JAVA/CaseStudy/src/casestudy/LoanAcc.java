package casestudy;

public class LoanAcc extends BankAccount {
    private static final double interestRate = 0.10;

    public LoanAcc(String accID, String accHolderName, double loanAmount) {
        super(accID, accHolderName, -loanAmount, "Loan");
    }

    @Override
    public void deposit(double amount) {
        balance += amount;
        System.out.println("Loan repayment received: ₹" + amount);
        System.out.println("Updated Loan Balance: ₹" + balance);
    }

    @Override
    public void withdraw(double amount) {
        if (balance > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Excess balance withdrawn: ₹" + amount);
        } else {
            System.out.println("Withdrawal not allowed from a Loan Account.");
        }
        System.out.println("Current Balance: ₹" + balance);
    }

    @Override
    public void calculateIntrest() {
        double interest = Math.abs(balance) * interestRate;
        balance -= interest;
        System.out.println("Interest added to Loan: ₹" + interest);
        System.out.println("Updated Loan Balance: ₹" + balance);
    }
}
