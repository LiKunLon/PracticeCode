package service;

import com.fasterxml.jackson.databind.ObjectMapper;
import dao.UserInfoDao;
import models.UserInfo;
import utils.ResultJSONUtils;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;
import java.sql.SQLException;
import java.util.HashMap;

public class RegServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        this.doGet(request, response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
//        response.setCharacterEncoding("utf-8");
//        // 注意数据类型
//        response.setContentType("application/json");
        int state = -1; // 200 表示接口执行成功
        String msg = "";
        // 1.接收前端参数
        String username = request.getParameter("username");
        String password = request.getParameter("password");
        PrintWriter writer = response.getWriter();
        if (username == null || password == null) {
            // 参数不正确
            msg = "参数不正确";
        } else {
            // 操作数据库进行插入操作
            UserInfo userInfo = new UserInfo();
            userInfo.setUsername(username);
            userInfo.setPassword(password);
            // 调用操作数据库的方法
            UserInfoDao userInfoDao = new UserInfoDao();
            try {
                // 调用插入方法，操作数据库
                boolean res = userInfoDao.add(userInfo);
                if (res) {
                    // 操作数据库成功
                    state = 200;
                } else {
                    // 操作数据库失败
                    state = 100;
                }
            } catch (SQLException throwables) {
                throwables.printStackTrace();
            }
        }
        HashMap<String, Object> result = new HashMap<>();
        result.put("state", state);
        result.put("msg", msg);
        ObjectMapper mapper = new ObjectMapper();
        // 调用统一的输出方法进行输出
        ResultJSONUtils.write(response, mapper.writeValueAsString(result));
    }
}
