import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

public class SetCookieServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        this.doGet(request, response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        // 1.设置两个基础的属性
        response.setCharacterEncoding("utf-8");
        response.setContentType("text/html");
        // 2.给客户端写入 Cookie
        Cookie nameCookie = new Cookie("username","java");
        // 设置 cookie 的最大存活时间
        nameCookie.setMaxAge(60); // 最大存活时间 60s
        // 将 Cookie 信息写入到客户端（浏览器）
        response.addCookie(nameCookie);

        // 多个 Cookie 存储
        Cookie pwdCookie = new Cookie("password","root");
        pwdCookie.setMaxAge(-1); // 【此值如果是-1表示cookie“永”不过期】
        response.addCookie(pwdCookie);

        PrintWriter writer = response.getWriter();
        writer.println("<h1>Cookie 写入成功~</h1>");
    }
}
