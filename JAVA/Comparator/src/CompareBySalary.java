import java.util.Comparator;

public class CompareBySalary implements Comparator<Employee> {
   
    
    String param;
    
    public CompareBySalary(String param) {
		super();
		this.param = param;
	}

	public int compare(Employee e1, Employee e2) {
		if(param.equals("salary"))
        return Double.compare(e1.getSalary(), e2.getSalary());
		else if(param.equals("id"))
			return Integer.compare(e1.getId(), e2.getId());
		else
			 return e1.getName().compareTo(e2.getName());
			
    }
}
