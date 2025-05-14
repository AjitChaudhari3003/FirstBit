package casestudy1;

public class Main_app {
    public static void main(String[] args) {
        Bank_management_system bank = new Bank_management_system();

        Account acc1 = bank.createAccount("saving", "Shivam", 1001, 15000);
        Account acc2 = bank.createAccount("current", "Neha", 1002, 10000);

        bank.performTransaction(1001, 2000, "withdraw");
        bank.performTransaction(1002, 3000, "withdraw");

        bank.generateReport();
    }
}
