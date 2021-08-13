import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

public class Calc extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        resp.setCharacterEncoding("utf-8");
        resp.setContentType("text/html");
        // 业务逻辑
        // 1.获得前端提交的参数
//        Integer num1 = req.getParameter("n1");
        Integer num1 = Integer.parseInt(req.getParameter("number1"));
        Integer num2 = Integer.parseInt(req.getParameter("number2"));
        Integer total = num1+num2;
        PrintWriter writer = resp.getWriter();
        writer.println("<h1>计算的结果："+total+"<h1>");
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doGet(req,resp);
    }
}
