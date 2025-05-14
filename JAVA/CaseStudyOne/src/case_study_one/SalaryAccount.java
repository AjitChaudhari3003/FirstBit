package case_study_one;


public class SalaryAccount extends Account {
	 boolean frozeStatus;

	    public SalaryAccount(String accountHolder, double balance) {
	        super(accountHolder, balance);
	        this.frozeStatus = false; // Initially not frozen
	    }

	    @Override
	    public void withdraw(double amount) {
	        if (frozeStatus) {
	            System.out.println("Account is frozen. Withdrawal not allowed.");
	        } 
	        
	        else if (getBalance() >= amount) {
	            setBalance(getBalance() - amount);
	            addTransaction("Withdraw", amount);  // Using the addTransaction method
	            System.out.println("Withdrawal successful. Current Balance: " + getBalance());
	        } 
	        
	        else {
	            System.out.println("Insufficient balance.");
	        }
	    }

	    @Override
	    public double calculateInterest() {
	        return 0.02 * getBalance(); // 2% interest for Salary Account
	    }


	    public void freezeAccount() {
	        frozeStatus = true;
	    }

	    public void unfreezeAccount() {
	        frozeStatus = false;
	    }

}
