package case_study_one;

import java.text.SimpleDateFormat;
import java.util.Date;

public abstract class Account {
	  String accountHolder;
	    double balance;
	    long accountNo;
	    String creationDate;
	    boolean closed;		// account close or not
	    String closedDate;  // account close date
	    Transaction[] transactions;  // Array to hold transactions
	    int transactionCount;  		// Count of the transactions 
	    

	    // Constructor 
	    public Account(String accountHolder, double balance) {
	        this.accountHolder = accountHolder;
	        this.balance = balance;
	        this.creationDate = getCurrentDate();
	        this.closed = false;
	        this.transactions = new Transaction[50];  
	        this.transactionCount = 0;  			 // Initially, no transactions
	    }
	    
	    
	    // deposit money 
	    public void deposit(double amount) {
	        if (amount > 0) {
	            setBalance(getBalance() + amount);  // Increase balance by the deposit amount
	            addTransaction("Deposit", amount);  // Record the deposit transaction
	            System.out.println("Deposited: " + amount);
	            System.out.println("Updated Balance: " + getBalance());
	        } 
	        
	        else {
	            System.out.println("Deposit amount must be positive.");
	        }
	    }

	    
	    // Abstract methods to be implemented by derived classes
	    public abstract void withdraw(double amount);
	    public abstract double calculateInterest();
	    

	    // Getters and Setters for account properties
	    public String getAccountHolder() {
	        return accountHolder;
	    }

	    public void setAccountHolder(String accountHolder) {
	        this.accountHolder = accountHolder;
	    }

	    public double getBalance() {
	        return balance;
	    }

	    public void setBalance(double balance) {
	        this.balance = balance;
	    }

	    public long getAccountNo() {
	        return accountNo;
	    }

	    public void setAccountNo(long accountNo) {
	        this.accountNo = accountNo;
	    }

	    public String getCreationDate() {
	        return creationDate;
	    }

	    public boolean isClosed() {
	        return closed;
	    }

	    public void setClosed(boolean closed) {
	        this.closed = closed;
	        this.closedDate = getCurrentDate();  // Automatically set the closed date
	    }

	    public String getClosedDate() {
	        return closedDate;
	    }

	    public Transaction[] getTransactions() {
	        return transactions;
	    }
	    

	    // Add a transaction to the account's history
	    public void addTransaction(String type, double amount) {
	        if (transactionCount < transactions.length) {
	            String txId = generateTxId();  // Generate transaction ID
	            Transaction transaction = new Transaction(txId, type, amount);  // Create a new transaction
	            transactions[transactionCount++] = transaction;  // Add to the transactions array
	        } 
	        
	        else {
	            System.out.println("Transaction limit reached.");
	        }
	    }

	    
	    // Generate a unique transaction ID
	    public String generateTxId() {
	        return "TX" + this.getAccountNo();
	    }

	    
	    // Current date in YYYY-MM-DD format
	    public String getCurrentDate() {
	    	// Get current date using LocalDate and convert it to a string
	        return java.time.LocalDate.now().toString();
	    }

	    
	    // Calculate the number of days since account creation
	    public int getDaysSinceCreation() {
	        try {
	            SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
	            Date creationDateObj = sdf.parse(creationDate);
	            Date currentDateObj = new Date(); // Get current date

	            long diffInMillies = currentDateObj.getTime() - creationDateObj.getTime();
	            return (int) (diffInMillies / (1000 * 60 * 60 * 24)); // Convert milliseconds to days
	        } 
	        
	        catch (Exception e) {
	            System.out.println("Error parsing creation date: " + e.getMessage());
	            return 0;  // Return 0 in case of error
	        }
	    }
	    

	    // Total number of transactions for  account
	    public int getTotalTransactions() {
	        return transactionCount;
	    }

}
