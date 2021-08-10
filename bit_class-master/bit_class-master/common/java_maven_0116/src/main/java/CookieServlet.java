import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

public class CookieServlet extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        Cookie nameCookie = new Cookie("username", "Java");
        nameCookie.setMaxAge(60);
        Cookie timeCookie = new Cookie("pwd", "SQL");
        resp.setCharacterEncoding("utf-8");
        resp.setContentType("text/html");
        resp.addCookie(nameCookie);
        resp.addCookie(timeCookie);
        PrintWriter writer = resp.getWriter();
        writer.println("<h1>Cookie Set Success.</h1>");
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doGet(req, resp);
    }
}
