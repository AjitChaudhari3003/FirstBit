//package inter;
//
//import Employee;
//
//public class Main {
//    public static void main(String[] args) {
//        // Employee emp = new Employee();
//
//        Employee emp1;
//
//        emp1 = new HR("Ram", 1, 30000, 3000);
//        allemployees(emp1);
//
//        emp1 = new SalesManager("Shamam", 2, 30000, 2000);
//        allemployees(emp1);
//    }
//
//    public static void allemployees(Employee emp1) {
//        System.out.println(emp1.getName());
//        emp1.calsal();
//
//        if (emp1 instanceof HR) {
//            HR h = (HR) emp1;
//            System.out.println("Commission: " + h.getCommision());
//        }
//
//        if (emp1 instanceof SalesManager) {
//            SalesManager s = (SalesManager) emp1;
//            System.out.println("Incentive: " + s.getIncentive());
//        }
//    }
//}
