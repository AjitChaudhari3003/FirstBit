package case_study_one;


public class CurrentAccount extends Account {
	
	 static final double overdraftLimit = 50000.00;

	    public CurrentAccount(String accountHolder, double balance) {
	        super(accountHolder, balance);
	    }

	    @Override
	    public void withdraw(double amount) {
	        //  withdrawal amount is +ve and not exceed overdraftLimit
	        if (amount > 0 && getBalance() - amount >= -overdraftLimit) {
	            setBalance(getBalance() - amount);
	            addTransaction("Withdraw", amount);  // Record withdrawal transaction
	            System.out.println("Withdrawn: " + amount);
	            System.out.println("Remaining Balance: " + getBalance());
	        } 
	        
	        else {
	            System.out.println("Withdrawal failed. You cannot exceed the overdraft limit of " + overdraftLimit);
	        }
	    }

	    @Override
	    public double calculateInterest() {
	        return 0;  
	    }

}
