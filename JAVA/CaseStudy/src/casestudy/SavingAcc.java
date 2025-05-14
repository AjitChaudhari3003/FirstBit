package casestudy;

public class SavingAcc extends BankAccount {
	private static final double intrestRate=0.05;
	private static final double minBal=10000;
	
	public SavingAcc(String accID, String accHolderName, double balance, String accType) {
		super(accID, accHolderName, balance, "Saving");
		
	}
	
	void withdraw(double amount) {
		if((balance-amount)>=minBal) {
		balance=balance-amount;
		System.out.println("Amount withdrewn :"+amount);
		}else {
			System.out.println("Withdrawal denied: Minimum balance of ₹10,000 must be maintained.");

			
		}
		System.out.println("Updated balance :"+ balance);
		
	}

	public void calculateIntrest() {
		if(balance >=minBal) {
		 double intrest = balance*intrestRate;
		 balance =balance+intrest;
		 System.out.println("Intrest added :"+intrest);
		}else {
			System.out.println("Below Minimum balance , no intrest is added");
		}
	
	}
	


}
