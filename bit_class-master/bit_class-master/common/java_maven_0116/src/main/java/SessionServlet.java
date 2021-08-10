import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Date;

public class SessionServlet extends HttpServlet {
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        // 获取 session,如果不存在就创建一个
        HttpSession session = req.getSession();
        // 创建时间
        Date createDate = new Date(session.getCreationTime());
        // 最后访问时间
        Date lastDate = new Date(session.getLastAccessedTime());
        // session id
        String sessionId = session.getId();
        int count = 1;
        final String sessionCountKey = "sessionCountKey";
        // 访问次数
        if (session.isNew()) {
            // 第一次访问
            session.setAttribute(sessionCountKey, count);
        } else {
            count = (int) session.getAttribute(sessionCountKey);
            count++;
            session.setAttribute(sessionCountKey, count);
        }
        resp.setCharacterEncoding("utf-8");
        resp.setContentType("text/html");
        PrintWriter writer = resp.getWriter();
        writer.println(String.format("<h1>欢迎访问</h1>"));
        writer.println("SessionID:" + sessionId);
        writer.println("<hr>");
        writer.println(String.format("创建时间%s,最后访问时间:%s", createDate, lastDate));
        writer.println("<hr>");
        writer.println("访问次数:" + count);
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doGet(req, resp);
    }
}
