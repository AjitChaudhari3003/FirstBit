package case_study;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        CoinManagement manager = new CoinManagement();
        Scanner sc = new Scanner(System.in);
        manager.loadFromDatabase();

        while (true) {
            System.out.println("\n1. Add Coin\n2. Bulk Upload\n3. Search by Country\n4. Search by Year\n5. Sort by Value\n6. Advanced Search\n7. Save to DB\n8. Exit");
            int choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {
                case 1:
                    System.out.print("Country: "); String country = sc.nextLine();
                    System.out.print("Denomination: "); double denom = sc.nextDouble();
                    System.out.print("Year of Minting: "); int year = sc.nextInt();
                    System.out.print("Current Value: "); double value = sc.nextDouble();
                    sc.nextLine(); // consume newline
                    System.out.print("Acquired Date (YYYY-MM-DD): "); String date = sc.nextLine();
                    manager.addCoin(new Coin(country, denom, year, value, date));
                    break;

                case 2:
                    System.out.print("Enter file path: ");
                    String path = sc.nextLine();
                    manager.bulkUpload(path);
                    break;

                case 3:
                    System.out.print("Enter Country: ");
                    manager.searchByCountry(sc.nextLine());
                    break;

                case 4:
                    System.out.print("Enter Year: ");
                    manager.searchByYear(sc.nextInt());
                    break;

                case 5:
                    manager.sortByCurrentValue();
                    break;

                case 6:
                    System.out.print("Country (or press Enter): ");
                    String c = sc.nextLine(); if (c.isEmpty()) c = null;
                    System.out.print("Denomination (or -1): ");
                    double d = sc.nextDouble(); Double denomVal = (d == -1) ? null : d;
                    System.out.print("Year (or -1): ");
                    int y = sc.nextInt(); Integer yearVal = (y == -1) ? null : y;
                    sc.nextLine();
                    System.out.print("Acquired Date (or press Enter): ");
                    String ad = sc.nextLine(); if (ad.isEmpty()) ad = null;
                    manager.searchSpecific(c, denomVal, yearVal, ad);
                    break;

                case 7:
                    manager.saveToDatabase();
                    break;

                case 8:
                    System.out.println("Exiting.");
                    return;
            }
        }
      
        
    }
    
}

