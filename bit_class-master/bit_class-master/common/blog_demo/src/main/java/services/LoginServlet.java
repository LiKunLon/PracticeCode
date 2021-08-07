package services;

import com.alibaba.fastjson.JSONObject;
import dao.UserDAO;
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
 * 登录
 */
public class LoginServlet extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        int succ = 0;
        String username = req.getParameter("username");
        String pwd = req.getParameter("pwd");
        UserDAO userDAO = new UserDAO();
        try {
            UserInfo userInfo = userDAO.getUserByName(username);
            if (null != userInfo && userInfo.getId() > 0 &&
                    pwd.equals(userInfo.getPwd())) {
                // 登录成功
                succ = 1;
                // 存储 session
                HttpSession session = req.getSession();
                session.setAttribute("userinfo", userInfo);
            }
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }
        JSONObject jsonObject = new JSONObject();
        jsonObject.put("succ", succ);
        WriteUtils.resultJSON(resp, jsonObject.toJSONString());
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doGet(req, resp);
    }
}
