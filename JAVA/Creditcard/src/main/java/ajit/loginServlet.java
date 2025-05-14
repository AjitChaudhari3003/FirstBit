package ajit;

import java.io.IOException;
import java.io.PrintWriter;

//import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
@WebServlet("/credit")
public class loginServlet extends HttpServlet {
    
    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse res) 
            throws ServletException, IOException {
        
        String user = req.getParameter("name");
        String pass = req.getParameter("last_four_digit");
        
        UserAuthentication obj = new UserAuthentication();
        boolean result = obj.checkUser(user, pass);
        
        if (result) {
            // Use redirect instead of forward to avoid resubmission
            res.sendRedirect(req.getContextPath() + "/second");
        } else {
            res.setContentType("text/html");
            PrintWriter out = res.getWriter();
            out.println("<h3 style='color:red;'>Invalid username or last four digits</h3>");
            // Add a link back to the form
            out.println("<a href='" + req.getContextPath() + "'>Try again</a>");
        }
    }
    
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse res) 
            throws ServletException, IOException {
        // Redirect GET requests to avoid direct access
        res.sendRedirect(req.getContextPath());
    }
}