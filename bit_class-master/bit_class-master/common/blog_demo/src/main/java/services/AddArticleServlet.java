package services;

import com.alibaba.fastjson.JSONObject;
import dao.ArticleDAO;
import models.UserInfo;
import utils.WriteUtils;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;
import java.sql.SQLException;

/**
 * 添加文章列表
 */
public class AddArticleServlet extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        int succ = 0;
        String msg = "";
        // 先判断是否登录
        HttpSession httpSession = req.getSession(false);
        UserInfo userInfo = null;
        if (httpSession != null && httpSession.getAttribute("userinfo") != null) {
            // 已经登录
            userInfo = (UserInfo) httpSession.getAttribute("userinfo");
            String title = req.getParameter("title");
            String desc = req.getParameter("desc");
            String content = req.getParameter("content");
            ArticleDAO articleDAO = new ArticleDAO();
            try {
                succ = articleDAO.addArticle(title, desc, content, userInfo.getId()) == true ? 1 : 0;
            } catch (SQLException throwables) {
                throwables.printStackTrace();
            }
        } else {
            // 未登录
            msg = "未登录非法操作!";
        }
        JSONObject jsonObject = new JSONObject();
        jsonObject.put("succ", succ);
        jsonObject.put("msg", msg);
        WriteUtils.resultJSON(resp, jsonObject.toJSONString());
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doGet(req, resp);
    }
}
