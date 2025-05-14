package Ajit;

public class UserAuthentication {
    // Business logic
    public boolean checkUser(String user, String pass) {
        Connectivity ref = new DatabaseConnectivity(); 
        return ref.isvalid(user, pass);
    }
}
