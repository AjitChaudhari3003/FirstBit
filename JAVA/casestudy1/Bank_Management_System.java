package casestudy1;
 class Bank_management_system {
    private static final int MAX_ACCOUNTS = 100;
    private Account[] accounts = new Account[MAX_ACCOUNTS];
    private int accountCount = 0;

    public Account createAccount(String accountType, String name, long number, double initialBalance) {
        if (accountCount >= MAX_ACCOUNTS) {
            System.out.println("Account limit reached. Cannot create more accounts.");
            return null;
        }

        Account account = null;
        switch (accountType.toLowerCase()) {
            case "saving":
                account = new Saving(number, name, initialBalance);
                break;
            case "salary":
                account = new Salary(number, name, initialBalance);
                break;
            case "current":
                account = new Current(number, name, initialBalance, 5000);
                break;
            case "loan":
                account = new Loan(number, name, initialBalance);
                break;
            default:
                System.out.println("Invalid account type.");
                return null;
        }

        accounts[accountCount++] = account;
        return account;
    }

    public void performTransaction(long accountId, double amount, String type) {
        Account account = findAccountById(accountId);
        if (account == null) {
            System.out.println("Account not found.");
            return;
        }

        if (type.equalsIgnoreCase("deposit")) {
            account.deposit(amount);
        } else if (type.equalsIgnoreCase("withdraw")) {
            account.withdraw(amount);
        } else {
            System.out.println("Invalid transaction type.");
        }
    }

    public void generateReport() {
        System.out.println("--Report--");
        for (int i = 0; i < accountCount; i++) {
            Account acc = accounts[i];
            System.out.println("Account No: " + acc.getAcNumber() + ", Name: " + acc.getAcHolderName() +
                    ", Balance: " + acc.getBalance() + ", Interest: " + acc.calculateInterest());
        }
    }

    private Account findAccountById(long accountId) {
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAcNumber() == accountId) {
                return accounts[i];
            }
        }
        return null;
    }
}

