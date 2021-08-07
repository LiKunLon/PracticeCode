package services;

import com.alibaba.fastjson.JSON;
import dao.ArticleDAO;
import models.Article;
import utils.ContentTypeEnum;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.PrintWriter;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

/**
 * 总文章列表
 */
public class ListServlet extends HttpServlet {

    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        // 每页条数
        String psizeStr = req.getParameter("psize");
        // 当前页
        String csizeStr = req.getParameter("csize");
        // 分页类型
        String typeStr = req.getParameter("type");
        ArticleDAO articleDAO = new ArticleDAO();
        List<Article> list = new ArrayList<>();
        try {
            if (psizeStr == null || psizeStr.length() == 0 ||
                    csizeStr == null || csizeStr.length() == 0 ||
                    typeStr == null || typeStr.length() == 0) {
                // 查询全部数据
                list = articleDAO.getAllArticle();
            } else {
                int psize = Integer.parseInt(psizeStr);
                int cszie = Integer.parseInt(csizeStr);
                int type = Integer.parseInt(typeStr);
                if (type == 1) {
                    // 查询首页
                    list = articleDAO.getArticleByPage(psize, 1);
                } else if (type == 2) {
                    // 上一页
                    cszie--;
                    if (cszie <= 0) cszie = 1;
                    list = articleDAO.getArticleByPage(psize, cszie);
                } else if (type == 3) {
                    // 下一页
                    list = articleDAO.getArticleByPage(psize, cszie + 1);
                } else {
                    // 最后一页
                    cszie = (int) Math.ceil(articleDAO.getCount() / (psize * 1.0));
                    list = articleDAO.getArticleByPage(psize, cszie);
                }
            }
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }
        resp.setContentType(ContentTypeEnum.ContentTypeJSON);
        resp.setCharacterEncoding("utf-8");
        String result = JSON.toJSONString(list);
        PrintWriter writer = resp.getWriter();
        writer.println(result);
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        this.doGet(req, resp);
    }
}
