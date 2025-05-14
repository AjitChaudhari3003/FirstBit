//package inter;
//
//import Employee;
//
//public class SalesManager extends Employee implements Taxable {
//    double incentive;
//
//    public SalesManager(String name, int id, double salary, double incentive) {
//        super(name, id, salary);
//        this.incentive = incentive;
//    }
//
//    public double getIncentive() {
//        return incentive;
//    }
//
//    public void setIncentive(double incentive) {
//        this.incentive = incentive;
//    }
//
//    public void display() {
//        super.display();
//        System.out.println("Incentive: ₹" + incentive);
//    }
//
//    public void calsal() {
//        double totalsal = salary + incentive;
//        System.out.println("Sales Manager Salary: ₹" + totalsal);
//    }
//
//    public void pay() {
//        calsal();
//        System.out.println("Sales Manager " + name + " is paid");
//    }
//
//    public void diwalibonus() {
//        System.out.println("Sales Manager " + name + " received Diwali bonus of ₹3000");
//    }
//
//	@Override
//	public void deductTDS() {
//		System.out.println("Tax is Deduct");
//		
//	}
//}
