package casestudy;

public class SalaryAcc extends SavingAcc {
   int monthsWithoutTransaction=0;
   boolean frozen=false;
   
   
public SalaryAcc(String accID, String accHolderName, double balance, String accType) {
	super(accID, accHolderName, balance, accType);
	this.accType="Salary";
}
   
public void recordTransaction() {
    monthsWithoutTransaction = 0;
    frozen = false;
}

public void nextMonthNoTransaction() {
    monthsWithoutTransaction++;
    if (monthsWithoutTransaction >= 2) {
        frozen = true;
        System.out.println("Account frozen due to inactivity for 2 months.");
    }
} 


@Override
public void deposit(double amount) {
    if (!frozen) {
        super.deposit(amount);
        recordTransaction();
    } else {
        System.out.println("Cannot deposit. Account is frozen.");
    }
}


public void withdraw(double amount) {
    if (!frozen) {
        super.withdraw(amount);
        recordTransaction();
    } else {
        System.out.println("Cannot withdraw. Account is frozen.");
    }
}


public void calculateIntrest() {
    if (!frozen) {
        super.calculateIntrest();
    } else {
        System.out.println("Account is frozen. No interest added.");
    }
}

}
