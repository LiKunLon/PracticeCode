import javax.servlet.ServletException;
import javax.servlet.annotation.MultipartConfig;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.Part;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.UUID;

@MultipartConfig
public class UploadServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setContentType("text/html");
        response.setCharacterEncoding("utf-8");
        // 保存图片
        // 1.得到图片对象
        Part part = request.getPart("myfile");
        // 2.将图片保存到某个位置
        UUID uuid = UUID.randomUUID(); // 生成全局id
        part.write("D:\\"+uuid+
                        part.getSubmittedFileName());

        // 用来告诉用户已经上传成功
        PrintWriter writer = response.getWriter();
        writer.println("<h1>上传成功~</h1>");


    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        this.doPost(request, response);
    }
}
