package case_study_one;

import java.time.LocalDate;

public class Transaction {
	   String txId;
	    String type;   // deposit / withdraw
	    double amount;
	    String date;

	    // Constructor
	    public Transaction(String txId, String type, double amount) {
	        this.txId = txId;
	        this.type = type;
	        this.amount = amount;
	        this.date = LocalDate.now().toString();  // Use LocalDate to get the current date
	    }

	    // Getters
	    public String getTxId() {
	        return txId;
	    }

	    public String getType() {
	        return type;
	    }

	    public double getAmount() {
	        return amount;
	    }

	    public String getDate() {
	        return date;
	    }

	    @Override
	    public String toString() {
	        return "Transaction ID: " + txId + ", Type: " + type + ", Amount: " + amount + ", Date: " + date;
	    }

}
