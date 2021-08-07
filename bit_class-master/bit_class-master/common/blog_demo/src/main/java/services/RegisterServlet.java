package services;

import com.alibaba.fastjson.JSONObject;
import dao.UserDAO;
import models.UserInfo;
import utils.WriteUtils;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.sql.SQLException;

/**
 * 注册
 */
public class RegisterServlet extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        int succ = 0;
        String msg = "";
        String username = req.getParameter("username");
        String pwd = req.getParameter("pwd");
        UserDAO userDAO = new UserDAO();
        // 先判定 username 是否已经存在
        try {
            UserInfo userInfo = userDAO.getUserByName(username);
            if (null != userInfo && userInfo.getId() > 0) {
                // username 已经被占用
                msg = "姓名已经被占用!";
            } else {
                succ = userDAO.add(username, pwd) == true ? 1 : 0;
            }
        } catch (SQLException throwables) {
            throwables.printStackTrace();
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
