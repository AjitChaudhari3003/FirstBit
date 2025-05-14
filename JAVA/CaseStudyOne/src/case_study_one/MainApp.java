package case_study_one;


public class MainApp {
	   public static void main(String[] args) {
	    	
	        BankManagement bankManagement = new BankManagement();
	        try 
	        {
	        	bankManagement.menuDriven();
			} 
	        
	        catch (OptionNotFoundException e) 
	        {
				e.wrongChoice();
			}
	        
	    }

}
