package case_study_one;


public class LoanAccount extends Account {
	   double loanAmount;
	    double repaidAmount;
	    double remainingLoan;
	    int creditScore;

	    public LoanAccount(long accountNo, String accountHolder, int creditScore) {
	        super(accountHolder, 0);  // Loan account has no balance initially
	        setAccountNo(accountNo);
	        this.creditScore = creditScore;
	        this.loanAmount = calLoanBasedOnScore(creditScore);
	        this.remainingLoan = this.loanAmount;
	    }

	    // Method to calculate loan amount based on credit score
	    public double calLoanBasedOnScore(int creditScore) {
	        if (creditScore < 300 || creditScore > 850) {
	            System.out.println("Invalid credit score. Loan cannot be granted.");
	            return 0;  // Invalid score
	        }

	        // Define the loan amount based on credit score ranges
	        if (creditScore >= 300 && creditScore <= 499) {
	            return 50000; 
	        } 
	        
	        else if (creditScore >= 500 && creditScore <= 699) {
	            return 100000; 
	        } 
	        
	        else if (creditScore >= 700 && creditScore <= 850) {
	            return 200000; 
	        }

	        return 0;  
	    }

	    public void repayLoan(double amount) {
	        if (amount <= remainingLoan) {
	            repaidAmount += amount;
	            remainingLoan -= amount;
	            addTransaction("Repay Loan", amount);  
	            System.out.println("Repayment successful. Remaining loan: " + remainingLoan);
	        } 
	        
	        else {
	            System.out.println("Repayment amount exceeds remaining loan.");
	        }
	    }

	    @Override
	    public void withdraw(double amount) {
	        System.out.println("Loan accounts do not support withdrawal.");
	    }

	    @Override
	    public double calculateInterest() {
	        return 0.10 * getBalance(); 
	    }

	    public double getLoanAmount() {
	        return loanAmount;
	    }

	    public int getCreditScore() {
	        return creditScore;
	    }

	    public double getRemainingLoan() {
	        return remainingLoan;
	    }

}
