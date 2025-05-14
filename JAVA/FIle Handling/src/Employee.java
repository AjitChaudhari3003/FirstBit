
import java.io.FileOutputStream;
import java.io.Serializable;

public  class Employee implements Serializable {
    String name;
    int id;
    double salary;

    public Employee(String name, int id, double salary) {
        this.name = name;
        this.id = id;
        this.salary = salary;
    }

    public String getName() {
        return name;
    }

    public int getId() {
        return id;
    }

    public double getSalary() {
        return salary;
    }

    public void display() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Salary: ₹" + salary);
    }

//    public abstract void calsal();
//
//    public abstract void pay();

    public void diwalibonus() {
        System.out.println(name + " received standard Diwali bonus");
    }

    public void insurence() {
        System.out.println("Insurance provided to " + name);
    }
}
