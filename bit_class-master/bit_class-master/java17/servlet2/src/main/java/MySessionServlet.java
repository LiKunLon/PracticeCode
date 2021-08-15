import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Date;

public class MySessionServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        this.doGet(request, response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setCharacterEncoding("utf-8");
        response.setContentType("text/html");
        PrintWriter writer = response.getWriter();

        // 在此之前 request.getSession() 默认用户信息是正确

        // 操作 Session，尝试从客户端获取一个 session，如果获取
        // 失败，这新创建一个session信息
        HttpSession session = request.getSession();

        String sessionId = session.getId();
        writer.println("<h1>欢迎访问~</h1>");
        writer.println(String.format("<h3>SessionID:%s</h3>",
                sessionId));
        writer.println("<hr>"); // 输出分隔线

        // 打印 Session 的创建时间
        writer.println("Session 创建时间："+
                new Date(session.getCreationTime()));

        // 打印 Session 的最后访问时间
        writer.println(String.format("<p></p>Session 最后访问时间：%s<p></p>",
                new Date(session.getLastAccessedTime())));

        // 会话 key 值定义
        String sessionKey = "countkey";
        // 判断当前会话信息session是否为新的会话信息
        if(session.isNew() ||
                session.getAttribute(sessionKey)==null){
            // 表示第一次使用 session 对象
            session.setAttribute(sessionKey,1);
            writer.println("访问次数：1");
        }else{
            // 非第一次访问
            int count =(int)session.getAttribute(sessionKey);
            count++;
            // 更新 session 信息
            session.setAttribute(sessionKey,count);
            writer.println("访问次数："+count);
        }


    }
}
