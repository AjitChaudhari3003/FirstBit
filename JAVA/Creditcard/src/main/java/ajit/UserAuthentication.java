package ajit;

public class UserAuthentication {
    public boolean checkUser(String user, String pass) {
        if (user == null || pass == null || pass.length() != 4) {
            return false;
        }
        Connectivity ref = new DatabaseConnectivity();
        return ref.isValid(user, pass);
    }
}