package CS2;




import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        HomeAutomationApp app = new HomeAutomationApp();
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\n--- Smart Home Automation Menu ---");
            System.out.println("1. Add Room");
            System.out.println("2. Add Device to Room");
            System.out.println("3. Turn ON a Device");
            System.out.println("4. Turn OFF a Device");
            System.out.println("5. Show Device Status");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");

            int choice = scanner.nextInt();
            scanner.nextLine();  // consume newline

            switch (choice) {
                case 1:
                    System.out.print("Enter room name: ");
                    String roomName = scanner.nextLine();
                    app.addRoom(roomName);
                    break;

                case 2:
                    System.out.print("Enter room name: ");
                    String rName = scanner.nextLine();
                    System.out.print("Enter device type (Light/AC/TV/Shower): ");
                    String type = scanner.nextLine().trim().toLowerCase();
                    System.out.print("Enter device name: ");
                    String dName = scanner.nextLine();

                    Device device = null;
                    switch (type) {
                        case "light":
                            device = new Light(dName);
                            break;
                        case "ac":
                            device = new AirConditioner(dName);
                            break;
                        case "tv":
                            device = new Television(dName);
                            break;
                        case "shower":
                            device = new Shower(dName);
                            break;
                        default:
                            System.out.println("Invalid device type.");
                            continue;
                    }

                    app.addDeviceToRoom(rName, device);
                    break;

                case 3:
                    System.out.print("Enter device name to turn ON: ");
                    app.turnOnDevice(scanner.nextLine());
                    break;

                case 4:
                    System.out.print("Enter device name to turn OFF: ");
                    app.turnOffDevice(scanner.nextLine());
                    break;

                case 5:
                    app.checkStatus();
                    break;

                case 6:
                    System.out.println("Exiting...");
                    scanner.close();
                    return;

                default:
                    System.out.println("Invalid choice! Try again.");
            }
        }
    }
}
