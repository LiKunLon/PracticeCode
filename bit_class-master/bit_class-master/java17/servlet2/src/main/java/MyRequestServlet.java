import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

public class MyRequestServlet extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doPost(req, resp);
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        resp.setCharacterEncoding("utf-8");
        resp.setContentType("text/html");
        // 获取请求方法类型
        String method = req.getMethod();
        String uri =  req.getRequestURI();
        String contentType = req.getContentType();
        // 输出获取参数信息
        PrintWriter writer = resp.getWriter();
        writer.println(String.format("<h1>method:%s</h1>",method));
        writer.println(String.format("<h1>uri:%s</h1>",uri));
        writer.println(String.format("<h1>contentType:%s</h1>",contentType));

    }
}
