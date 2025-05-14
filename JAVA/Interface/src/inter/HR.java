//package inter;
//
//import Employee;
//
//public class HR extends Employee implements Taxable{
//    double commision;
//
//    public HR(String name, int id, double salary, double commision) {
//        super(name, id, salary);
//        this.commision = commision;
//    }
//
//    public double getCommision() {
//        return commision;
//    }
//
//    public void setCommision(double commision) {
//        this.commision = commision;
//    }
//
//    public void display() {
//        super.display();
//        System.out.println("Commission: ₹" + commision);
//    }
//
//    public void calsal() {
//        double totalsal = salary + commision;
//        System.out.println("HR Salary: ₹" + totalsal);
//    }
//
//    public void pay() {
//        calsal();
//        System.out.println("HR " + name + " is paid");
//    }
//
//    public void diwalibonus() {
//        System.out.println("HR " + name + " received Diwali bonus of ₹5000");
//    }
//    
//    public void deductTDS() {
//		System.out.println(" HR Tax is Deduct");
//		
//	}
//}
