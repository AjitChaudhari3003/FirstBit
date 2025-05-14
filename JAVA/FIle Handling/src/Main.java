import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;

public class Main {

	

	public static void main(String[] args)throws IOException {
		//C:\Users\AJIT\Desktop\JAVAFBS
		String path="C:\\Users\\AJIT\\Desktop\\JAVAFBS\\Ajit1.txt";
		
		try {
		
		FileOutputStream fos = new FileOutputStream(path);
		ObjectOutputStream oos = new ObjectOutputStream(fos);
		
		oos.writeObject(new Employee("Ajit",101,50000));
		
		
		}catch(Exception e) {
			e.getMessage();
		}
		
		
		
		

	}

}
