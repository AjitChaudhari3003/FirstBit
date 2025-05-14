package casestudy;

public class CurrentAcc extends BankAccount {
    private double overdraftLimit = 20000;

    public CurrentAcc(String accID, String accHolderName, double balance, double overdraftLimit) {
        super(accID, accHolderName, balance, "Current");
        this.overdraftLimit = overdraftLimit;
    }

    @Override
    public void withdraw(double amount) {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            System.out.println("Amount withdrawn: " + amount);
        } else {
            System.out.println("Overdraft limit exceeded. Cannot withdraw.");
        }
        System.out.println("Updated Balance: " + balance);
    }

    @Override
    public void calculateIntrest() {
        System.out.println("No interest is applied on a Current Account.");
    }
}
