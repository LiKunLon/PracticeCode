package Services;

import Dao.UserInfoDao;
import models.Userinfo;
import utils.ResultJSONutils;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;
import java.io.IOException;
import java.sql.SQLException;
import java.util.HashMap;

public class LoginServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        this.doGet(request,response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        int succ=-1;
        String msg="";
        // 1.得出前端传递的参数
        String username=request.getParameter("username");
        String password=request.getParameter("password");
        // 2.去数据库验证用户名和密码【业务】
        if(username!=null && !username.equals("") && password!=null && !password.equals("")){
            UserInfoDao userInfoDao=new UserInfoDao();
            try {
                Userinfo userinfo=userInfoDao.getUser(username,password);
                if(userinfo.getId()>0){
                    succ=1;
                    // 将用户信息存放到 session
                    HttpSession session = request.getSession(); // 用来创建会话
                    // 将用户信息存放到当前session
                    session.setAttribute("userinfo", userinfo);
                }else{
                    succ=0;
                    msg="有错误!";
                }
            } catch (SQLException throwables) {
                throwables.printStackTrace();
            }
        }else{
            msg="参数不完整";
        }
        HashMap<String,Object> result=new HashMap<>();
        result.put("succ",succ);
        result.put("msg",msg);
        ResultJSONutils.write(response,result);
    }
}
