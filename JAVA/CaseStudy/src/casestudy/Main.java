package casestudy;

public class Main {
    public static void main(String[] args) {

        System.out.println("==== SAVING ACCOUNT ====");
        SavingAcc saving = new SavingAcc("S001", "Ajit", 12000, "Saving");
        saving.displayBalance();
        saving.deposit(2000);
        saving.withdraw(5000);
        saving.calculateIntrest();
        saving.displayBalance();

        System.out.println("\n==== SALARY ACCOUNT ====");
        SalaryAcc salary = new SalaryAcc("SA001", "Ajit", 15000, "Salary");
        salary.displayBalance();
        salary.nextMonthNoTransaction();
        salary.nextMonthNoTransaction();  // This will freeze the account
        salary.deposit(2000);             // Will fail due to freeze
        salary.recordTransaction();       // Reset inactivity
        salary.withdraw(1000);            // Will work now
        salary.calculateIntrest();
        salary.displayBalance();

        System.out.println("\n==== CURRENT ACCOUNT ====");
        CurrentAcc current = new CurrentAcc("C001", "Ajit", 10000, 20000);
        current.displayBalance();
        current.withdraw(25000); // Within overdraft limit
        current.deposit(5000);
        current.calculateIntrest();
        current.displayBalance();

        System.out.println("\n==== LOAN ACCOUNT ====");
        LoanAcc loan = new LoanAcc("L001", "Ajit", 50000);
        loan.displayBalance();
        loan.deposit(60000);
        loan.displayBalance();
        loan.withdraw(5000); 
        loan.displayBalance();
    }
}
