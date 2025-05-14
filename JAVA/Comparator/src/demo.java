import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class demo {

	public static void main(String[] args) {

     List<Employee> l1 =  new ArrayList<Employee>();
     l1.add(new Employee(101,"Ajit",50000));
     l1.add(new Employee(103,"Raj",61133));
     l1.add(new Employee(105,"Naaj",61133));
     l1.add(new Employee(102,"Aniket",16446));
     
//     System.out.println("Sorted by ID:");
//     Collections.sort(l1, new CompareById());
//
//     for(Employee e:l1) 
//    	 System.out.println(e);
     
     
     System.out.println("Sorted by Salary:");
     Collections.sort(l1, new CompareBySalary("salary"));

     for(Employee e:l1) 
    	 System.out.println(e);
     
//     System.out.println("Sorted by Name:");
//     Collections.sort(l1, new CompareByName());
//
//     for(Employee e:l1) 
//    	 System.out.println(e);
     
	}

}
