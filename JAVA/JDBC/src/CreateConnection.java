import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class CreateConnection {

	
	public static PreparedStatement getPreparedStatemet(String query)
	{
		 try {
			Class.forName("com.mysql.cj.jdbc.Driver");
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
         System.out.println("Driver Loaded Successfully");

         String url = "jdbc:mysql://localhost:3306/firstbit";
         
		try {
			Connection conn;
			conn = DriverManager.getConnection(url, "root", "Ajit@3003");
			PreparedStatement ps = conn.prepareStatement(query);
			 return ps;
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return null;
        
	}

	public static Connection getConnection() {
		// TODO Auto-generated method stub
		return null;
	}
}
