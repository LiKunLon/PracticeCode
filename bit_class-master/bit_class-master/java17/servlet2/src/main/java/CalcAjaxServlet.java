import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;

public class CalcAjaxServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        this.doGet(request, response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setCharacterEncoding("utf-8");
        // 数据类型
        response.setContentType("application/json");

        // 1.获取前端参数
        String num1 = request.getParameter("num1");
        String num2 = request.getParameter("num2");
        // 计算和
        int sum = Integer.parseInt(num1)+Integer.parseInt(num2);
        PrintWriter writer = response.getWriter();
        // 2.返回json格式的结果
        writer.println("{\"sum\":"+sum+"}");
    }
}
