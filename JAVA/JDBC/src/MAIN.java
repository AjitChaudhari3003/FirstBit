import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class MAIN {

	static Scanner sc=new Scanner(System.in);
    public static void main(String[] args) throws SQLException {
       
//    	Connection c=CreateConnection.getConnection();
//    	 Statement stmt = c.createStatement();
//    	stmt.execute("Create table employee (id int,name varchar(20),salary decimal(8,2));");
    	//addEmployee();
    	
    	Employee emp=getEmployeeById(102);
    	if(emp!=null)
    	{
    		System.out.println(emp);
    	}
    	else
    		System.out.println("Not found");
    	
           
    }

	private static Employee getEmployeeById(int id) throws SQLException {
		
		String query="select * from employee where id=?";
		
		PreparedStatement pstmt = CreateConnection.getPreparedStatemet(query);
		
		pstmt.setInt(1, id);
		
		ResultSet rs = pstmt.executeQuery();
		Employee emp=new Employee();
		
		if(rs.next())
		{
			emp.setId(rs.getInt("id"));
			emp.setName(rs.getString("name"));
			emp.setSalary(rs.getDouble("salary"));
			return emp;
		}
		return null;
	}

	private static void addEmployee() throws SQLException {
		
		System.out.println("Enter id,name,salary");
		int id=sc.nextInt();
		String name=sc.next();
		double salary=sc.nextDouble();
		Connection con=CreateConnection.getConnection();
		String query="insert into employee values(?,?,?)";
		
		PreparedStatement pstmt = con.prepareStatement(query);
		
		pstmt.setInt(1, id);
		pstmt.setString(2, name);
		pstmt.setDouble(3, salary);
		
		pstmt.executeUpdate();
		
		
	}

	
}
