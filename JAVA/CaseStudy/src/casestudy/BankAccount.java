package casestudy;



public abstract class BankAccount {
      String accID;
      String accHolderName;
      double balance;
      String accType;
     
     
	public BankAccount(String accID, String accHolderName, double balance, String accType) {
		super();
		this.accID = accID;
		this.accHolderName = accHolderName;
		this.balance = balance;
		this.accType = accType;
	}


	public String getAccID() {
		return accID;
	}


	public void setAccID(String accID) {
		this.accID = accID;
	}


	public String getAccHolderName() {
		return accHolderName;
	}


	public void setAccHolderName(String accHolderName) {
		this.accHolderName = accHolderName;
	}


	public double getBalance() {
		return balance;
	}


	public void setBalance(double balance) {
		this.balance = balance;
	}


	public String getAccType() {
		return accType;
	}


	public void setAccType(String accType) {
		this.accType = accType;
	}
	
	void deposit(double amount) {
		
		balance=balance+amount;
		System.out.println("Amount deposited :"+amount);
		System.out.println("Updated balance :"+ balance);
		
		
	}
     
	void withdraw(double amount) {
		if(amount <=balance) {
		balance=balance-amount;
		System.out.println("Amount withdrewn :"+amount);
		}else {
			System.out.println("Insufficient Balance");

			
		}
		System.out.println("Updated balance :"+ balance);
		
	}
	
	 void displayBalance() {
		 System.out.println("Account balance :"+balance);
	 }
     
	 
	 public abstract void calculateIntrest();
}











