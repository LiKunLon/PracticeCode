package dao;

import models.Article;
import utils.DBUtils;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

public class ArticleDAO {

    // 查询所有文章
    public List<Article> getAllArticle() throws SQLException {
        List<Article> list = new ArrayList<>();
        DBUtils dbUtils = new DBUtils();
        Connection connection = dbUtils.getConnection();
        String sql = "select * from article";
        PreparedStatement statement = connection.prepareStatement(sql);
        ResultSet resultSet = statement.executeQuery();
        while (resultSet.next()) {
            Article article = new Article();
            article.setId(resultSet.getInt("id"));
            article.setTitle(resultSet.getString("title"));
            article.setDesc(resultSet.getString("desc"));
            article.setContent(resultSet.getString("content"));
            article.setUid(resultSet.getInt("uid"));
            article.setRcount(resultSet.getInt("rcount"));
            article.setCreatetime(resultSet.getDate("createtime"));
            list.add(article);
        }
        dbUtils.close(connection, statement, resultSet);
        return list;
    }

    // 查询所有文章条数
    public int getCount() throws SQLException {
        int result = 0;
        DBUtils dbUtils = new DBUtils();
        Connection connection = dbUtils.getConnection();
        String sql = "select count(*) as count from article";
        PreparedStatement statement = connection.prepareStatement(sql);
        ResultSet resultSet = statement.executeQuery();
        if (resultSet.next()) {
            result = resultSet.getInt("count");
        }
        dbUtils.close(connection, statement, resultSet);
        return result;
    }

    // 查询分页文章
    public List<Article> getArticleByPage(int pagesize, int currpage) throws SQLException {
        List<Article> list = new ArrayList<>();
        DBUtils dbUtils = new DBUtils();
        Connection connection = dbUtils.getConnection();
        String sql = "select * from article limit ?,?";
        PreparedStatement statement = connection.prepareStatement(sql);
        statement.setInt(1, pagesize * (currpage - 1));
        statement.setInt(2, pagesize);
        ResultSet resultSet = statement.executeQuery();
        while (resultSet.next()) {
            Article article = new Article();
            article.setId(resultSet.getInt("id"));
            article.setTitle(resultSet.getString("title"));
            article.setDesc(resultSet.getString("desc"));
            article.setContent(resultSet.getString("content"));
            article.setUid(resultSet.getInt("uid"));
            article.setRcount(resultSet.getInt("rcount"));
            article.setCreatetime(resultSet.getDate("createtime"));
            list.add(article);
        }
        dbUtils.close(connection, statement, resultSet);
        return list;
    }

    // 查询个人文章
    public List<Article> getArticleByUId(int uid) throws SQLException {
        List<Article> list = new ArrayList<>();
        DBUtils dbUtils = new DBUtils();
        Connection connection = dbUtils.getConnection();
        String sql = "select * from article where uid=?";
        PreparedStatement statement = connection.prepareStatement(sql);
        statement.setInt(1, uid);
        ResultSet resultSet = statement.executeQuery();
        while (resultSet.next()) {
            Article article = new Article();
            article.setId(resultSet.getInt("id"));
            article.setTitle(resultSet.getString("title"));
            article.setDesc(resultSet.getString("desc"));
            article.setContent(resultSet.getString("content"));
            article.setUid(resultSet.getInt("uid"));
            article.setRcount(resultSet.getInt("rcount"));
            article.setCreatetime(resultSet.getDate("createtime"));
            list.add(article);
        }
        dbUtils.close(connection, statement, resultSet);
        return list;
    }

    // 查询文章详情
    public Article getArticleById(int id) throws SQLException {
        Article article = null;
        DBUtils dbUtils = new DBUtils();
        Connection connection = dbUtils.getConnection();
        String sql = "select * from article where id=?";
        PreparedStatement statement = connection.prepareStatement(sql);
        statement.setInt(1, id);
        ResultSet resultSet = statement.executeQuery();
        while (resultSet.next()) {
            article = new Article();
            article.setId(resultSet.getInt("id"));
            article.setTitle(resultSet.getString("title"));
            article.setDesc(resultSet.getString("desc"));
            article.setContent(resultSet.getString("content"));
            article.setUid(resultSet.getInt("uid"));
            article.setRcount(resultSet.getInt("rcount"));
            article.setCreatetime(resultSet.getDate("createtime"));
        }
        dbUtils.close(connection, statement, resultSet);
        return article;
    }

    // 添加文章
    public boolean addArticle(String title, String desc, String content, int uid) throws SQLException {
        DBUtils dbUtils = new DBUtils();
        Connection connection = dbUtils.getConnection();
        String sql = "insert into article(title,`desc`,content,uid) values(?,?,?,?)";
        PreparedStatement statement = connection.prepareStatement(sql);
        statement.setString(1, title);
        statement.setString(2, desc);
        statement.setString(3, content);
        statement.setInt(4, uid);
        boolean result = statement.executeUpdate() > 0;
        dbUtils.close(connection, statement, null);
        return result;
    }

    // 修改文章
    public boolean upArticle(int id, String title, String desc, String content) throws SQLException {
        DBUtils dbUtils = new DBUtils();
        Connection connection = dbUtils.getConnection();
        String sql = "update article set title=?,`desc`=?,content=? where id=?";
        PreparedStatement statement = connection.prepareStatement(sql);
        statement.setString(1, title);
        statement.setString(2, desc);
        statement.setString(3, content);
        statement.setInt(4, id);
        boolean result = statement.executeUpdate() > 0;
        dbUtils.close(connection, statement, null);
        return result;
    }

    // 删除文章
    public int delArticle(int id) throws SQLException {
        DBUtils dbUtils = new DBUtils();
        Connection connection = dbUtils.getConnection();
        String sql = "delete from article where id=?";
        PreparedStatement statement = connection.prepareStatement(sql);
        statement.setInt(1, id);
        int result = statement.executeUpdate();
        dbUtils.close(connection, statement, null);
        return result;
    }

}
