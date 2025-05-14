package case_study_one;

public class SavingAccount extends Account {

    public SavingAccount(String accountHolder, double balance) {
        super(accountHolder, balance);
    }

    @Override
    public void withdraw(double amount) {
        if (amount > 0 && getBalance() >= amount) {
            setBalance(getBalance() - amount);  // Decrease balance by withdrawal amount
            addTransaction("Withdrawal", amount);  // Record withdrawal transaction
            System.out.println("Withdrew: " + amount);
            System.out.println("Updated Balance: " + getBalance());
        } 
        
        else {
            System.out.println("Insufficient balance or invalid withdrawal amount.");
        }
    }

    @Override
    public double calculateInterest() {
        return 0.04 * getBalance(); // 4%
    }

}
