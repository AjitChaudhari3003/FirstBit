package case_study_one;

import java.util.Scanner;

public class BankManagement {
    static final int maxAccounts = 50; // Maximum number of accounts
    Account[] allAccounts = new Account[maxAccounts];
    static int accountCount = 0; // Keeps track of the number of accounts
    Scanner scanner;
    
    int choice;

    public BankManagement() {
        scanner = new Scanner(System.in);
    }
//menu-driven
    public void menuDriven() throws OptionNotFoundException {
        int continueChoice = 1; // Start with non-zero to enter the loop

        while (continueChoice != 0) {
            System.out.println("\nBank Management System:");
            System.out.println("1. Over the Counter Activities");
            System.out.println("2. Account Lifecycle");
            System.out.println("3. Interest Calculation");
            System.out.println("4. Daily Transaction Report");
            System.out.print("Choose an option: ");

            while (!scanner.hasNextInt()) {
                System.out.println("Invalid input. Please enter a number between 1 and 4.");
                scanner.nextLine();
                System.out.print("Choose an option: ");
            }

            int choice = scanner.nextInt();
            scanner.nextLine(); // consume newline

            switch (choice) {
                case 1:
                    overTheCounterActivities(); break;
                case 2:
                    accountLifecycle(); break;
                case 3:
                    interestCalculation(); break;
                case 4:
                    dailyTransactionReport(); break;
                default:
                    throw new OptionNotFoundException();
            }

            // ✅ Only ask to continue after the above action is done
            System.out.println("\nWould you like to continue with Menu-driven activities?");
            System.out.println("Enter any non-zero value to continue.");
            System.out.println("Enter 0 to exit to the main menu.");
            String input = scanner.nextLine();

            if (input.isEmpty()) {
                continueChoice = 0;
            } else {
                try {
                    continueChoice = Integer.parseInt(input);
                } catch (NumberFormatException e) {
                    System.out.println("Invalid input. Exiting.");
                    continueChoice = 0;
                }
            }
        }
    }


    // over-the-counter activities
    public void overTheCounterActivities() {
        int continueChoice;
        do {
            System.out.println("\nOver the Counter Activities:");
            System.out.println("1. Create Account");
            System.out.println("2. Delete Account");
            System.out.println("3. Search Account");
            System.out.println("4. List All Accounts");
            System.out.println("5. Check Account Balance");
            System.out.println("6. Deposit");
            System.out.println("7. Withdraw");
            System.out.print("Choose an option: ");
             choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    createAccount();
                    break;
                case 2:
                    deleteAccount();
                    break;
                case 3:
                    searchAccount();
                    break;
                case 4:
                    listAllAccounts();
                    break;
                case 5:
                    checkBalance();
                    break;
                case 6:
                    depositMoney();
                    break;
                case 7:
                    withdrawMoney();
                    break;
                default:
                    System.out.println("Invalid choice.....");
                    
            }

            System.out.println("Would you like to continue with over-the-counter activities?");
            System.out.println("Enter any non-zero value to continue.");
            System.out.println("Enter 0 to exit to the main menu.");
            continueChoice = scanner.nextInt(); 
            scanner.nextLine();

        } while (continueChoice != 0);
    }


    // Create an account
    public void createAccount() {
        System.out.println("\nSelect Account Type to Create:");
        System.out.println("1. Saving Account");
        System.out.println("2. Current Account");
        System.out.println("3. Salary Account");
        System.out.println("4. Loan Account");
        System.out.print("Choose an option: ");
        int choice = scanner.nextInt();

        scanner.nextLine(); // Consume leftover newline
        System.out.print("Enter Account Holder Name: ");
        String accountHolder = scanner.nextLine();

        Account newAccount = null;
        long accountNo = generateAccountNumber();

        switch (choice) {
            case 1:
                System.out.print("Enter Initial Balance: ");
                double savingBalance = scanner.nextDouble();

                if (savingBalance < 2000) {
                    System.out.println("Initial amount should be at least 2000. Account creation failed.");
                    return;
                }

                newAccount = new SavingAccount(accountHolder, savingBalance);
                break;

            case 2:
                System.out.print("Enter Initial Balance: ");
                double currentBalance = scanner.nextDouble();
                newAccount = new CurrentAccount(accountHolder, currentBalance);
                break;

            case 3:
                System.out.print("Enter Initial Balance: ");
                double salaryBalance = scanner.nextDouble();
                newAccount = new SalaryAccount(accountHolder, salaryBalance);
                break;

            case 4:
                int creditScore;
                while (true) {
                    System.out.print("Enter Credit Score for Loan Account: ");
                    creditScore = scanner.nextInt();
                    if (creditScore >= 300 && creditScore <= 850) {
                        break;
                    } else {
                        System.out.println("Invalid credit score. Enter a value between 300 and 850.");
                    }
                }
                newAccount = new LoanAccount(accountNo, accountHolder, creditScore);
                break;

            default:
                System.out.println("Invalid account type.");
                return;
        }

        newAccount.setAccountNo(accountNo);
        if (accountCount < maxAccounts) {
            allAccounts[accountCount++] = newAccount;
            System.out.println("Account created successfully...");
            System.out.println("Account Number: " + accountNo);
            if (newAccount instanceof LoanAccount) {
                LoanAccount loanAccount = (LoanAccount) newAccount;
                System.out.println("Loan Amount Granted: " + loanAccount.getLoanAmount());
            }
        } else {
            System.out.println("Account creation failed. Maximum account limit reached.");
        }
    }

    
    // Delete an account
    public void deleteAccount() {
        System.out.print("Enter Account Number to Delete: ");
        long accountNo = scanner.nextLong();
        int index = findAccountIndexByNumber(accountNo);

        if (index != -1) {
            // Shift accounts to remove the deleted account
            for (int i = index; i < accountCount - 1; i++) {
                allAccounts[i] = allAccounts[i + 1];
            }
            allAccounts[accountCount--] = null; // Decrease account count
            System.out.println("Account deleted successfully.");
        }
        
        else {
            System.out.println("Account not found.");
        }
    }

    // Search an account
    public void searchAccount() {
        System.out.print("Enter Account Number to Search: ");
        long accountNo = scanner.nextLong();
        int index = findAccountIndexByNumber(accountNo);

        if (index != -1) {
            Account account = allAccounts[index];
            System.out.println("Account Found: ");
            System.out.println("Account Holder: " + account.getAccountHolder());
            System.out.println("Account Balance: " + account.getBalance());
            System.out.println("Account Type: " + account.getClass().getSimpleName());
            System.out.println("Account Creation Date: " + account.getCreationDate());
        } 
        
        else {
            System.out.println("Account not found.");
        }
    }

    
    //display allAccounts
    public void listAllAccounts() {
        if (accountCount == 0) {
            System.out.println("No accounts available.");
        } 
        
        else {
            System.out.println("Listing all accounts: ");
            for (int i = 0; i < accountCount; i++) {
                Account account = allAccounts[i];
                System.out.println("Account No: " + account.getAccountNo());
                System.out.println("Account Holder: " + account.getAccountHolder());
                System.out.println("Balance: " + account.getBalance());
                System.out.println("Account Type: " + account.getClass().getSimpleName());
                System.out.println("Account Creation Date: " + account.getCreationDate());
                System.out.println("---------------------------");
            }
        }
    }

    
    // Check Balance
    public void checkBalance() {
        System.out.print("Enter Account Number to Check Balance: ");
        long accountNo = scanner.nextLong();
        int index = findAccountIndexByNumber(accountNo);

        if (index != -1) {
            Account account = allAccounts[index];
            System.out.println("Account Balance: " + account.getBalance());
        } 
        
        else {
            System.out.println("Account not found.");
        }
    }

    
    // Deposit Money
    public void depositMoney() {
        System.out.print("Enter Account Number to Deposit: ");
        long accountNo = scanner.nextLong();
        int index = findAccountIndexByNumber(accountNo);

        if (index != -1) {
            System.out.print("Enter Deposit Amount: ");
            double amount = scanner.nextDouble();
            
            // Accessing the account at the given index
            Account account = allAccounts[index];
            
            // Calling the deposit method to deposit the money
            account.deposit(amount);  // Using the deposit method from the Account class
            
            System.out.println("Deposited " + amount + " to account " + accountNo);
        } 
        
        else {
            System.out.println("Account not found.");
        }
    }

    
    // Withdraw money
    public void withdrawMoney() {
        System.out.print("Enter Account Number to Withdraw: ");
        long accountNo = scanner.nextLong();
        int index = findAccountIndexByNumber(accountNo);

        if (index != -1) {
            System.out.print("Enter Withdrawal Amount: ");
            double amount = scanner.nextDouble();
            Account account = allAccounts[index];
            account.withdraw(amount);
            System.out.println("Withdrew " + amount + " from account " + accountNo);
        } 
        
        else {
            System.out.println("Account not found.");
        }
    }

    
    // Method to find an account by account number
    public int findAccountIndexByNumber(long accountNo) {
        for (int i = 0; i < accountCount; i++) {
            if (allAccounts[i].getAccountNo() == accountNo) {
                return i;
            }
        }
        return -1; // Account not found
    }

    
    // Generate unique account number
    public long generateAccountNumber() {
        return (long) (Math.random() * 1000000005); // Generate a random account number
    }
    

    // Account life Cycle
    public void accountLifecycle() {
        System.out.print("Enter Account Number: ");
        long accountNo = scanner.nextLong();
        int index = findAccountIndexByNumber(accountNo);

        if (index != -1) {
            Account account = allAccounts[index];
            System.out.println("Account Creation Date: " + account.getCreationDate());
            System.out.println("Number of Days Since Account Creation: " + account.getDaysSinceCreation());
            System.out.println("Total Transactions: " + account.getTotalTransactions());
        } 
        
        else {
            System.out.println("Account not found.");
        }
    }

    
    // calculate Interest
    public void interestCalculation() {
        System.out.print("Enter Account Number: ");
        long accountNo = scanner.nextLong();
        int index = findAccountIndexByNumber(accountNo);

        if (index != -1) {
            Account account = allAccounts[index];
            double interest = account.calculateInterest();
            System.out.println("Interest Calculated: " + interest);
        } 
        
        else {
            System.out.println("Account not found.");
        }
    }

    
    // Daily transaction report
    public void dailyTransactionReport() 
    {

	        // Displaying the transaction report
	        for (int i = 0; i < accountCount; i++) 
	        {
	            Account account = allAccounts[i];
	            System.out.println("Account No: " + account.getAccountNo());
	            
	            for (int j = 0; j < account.getTotalTransactions(); j++) {
	                System.out.println(account.getTransactions()[j]);
	            }
	        }
	     }   
}
