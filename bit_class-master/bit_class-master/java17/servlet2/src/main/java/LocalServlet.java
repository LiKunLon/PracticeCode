import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Date;

public class LocalServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doPost(req, resp);
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        resp.setCharacterEncoding("utf-8");
        resp.setContentType("text/html");

        String name = req.getParameter("name");
        String pwd = req.getParameter("pwd");
        if(name!=null && pwd!=null &&
                name.equals("root") && pwd.equals("root")){
            // 实现跳转的方式1
            // 用户和密码输入正确，调整到百度
//            resp.setStatus(302);
//            resp.setHeader("location","http://www.baidu.com");

            // 实现跳转的方式2
            resp.sendRedirect("http://www.baidu.com");
        }else{
            PrintWriter writer = resp.getWriter();
            writer.println("<h1>输入的用户名和密码错误！</h1>");
        }
    }
}
