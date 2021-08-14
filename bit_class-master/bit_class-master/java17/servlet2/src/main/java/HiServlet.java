import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

public class HiServlet extends HttpServlet {

    // 方法类型为 GET 的请求
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        // 设置页面编码
        resp.setCharacterEncoding("utf-8");
        // 设置返回的数据类型
        resp.setContentType("text/html");

        PrintWriter writer = resp.getWriter();
        writer.println("<h1>Hi,Servlet~</h1>");
        resp.setContentType("text/html");
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doGet(req,resp);
    }
}
