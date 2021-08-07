package services;

import com.alibaba.fastjson.JSON;
import dao.ArticleDAO;
import models.Article;
import utils.WriteUtils;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.sql.SQLException;

/**
 * 个人文章列表
 */
public class DetailsServlet extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        int id = Integer.parseInt(req.getParameter("id"));
        ArticleDAO articleDAO = new ArticleDAO();
        Article article = null;
        try {
            article = articleDAO.getArticleById(id);
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }
        WriteUtils.resultJSON(resp, (JSON.toJSON(article)).toString());
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doGet(req, resp);
    }
}
