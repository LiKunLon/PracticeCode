package Services;

import Dao.ArticleInfoDao;
import models.ArticleInfo;
import utils.ResultJSONutils;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.sql.SQLException;
import java.util.HashMap;

public class DeleteServlet extends HttpServlet {
    protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        this.doGet(request, response);
    }

    protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
        response.setCharacterEncoding("utf-8");
        response.setContentType("application/json");
        int succ=-1;
        String msg="";
        int id=Integer.parseInt(request.getParameter("id"));
        ArticleInfoDao articleInfoDao=new ArticleInfoDao();
        try {
            succ=articleInfoDao.del(id);
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }

        HashMap<String,Object> result=new HashMap<>();
        result.put("succ",succ);
        result.put("msg",msg);
        ResultJSONutils.write(response,result);
    }
}
