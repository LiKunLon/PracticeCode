package Dao;

import models.ArticleInfo;
import utils.DButils;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

public class ArticleInfoDao {
    public List<ArticleInfo> getListByUID(int uid) throws SQLException {
        List<ArticleInfo> list=new ArrayList<>();
        Connection connection= DButils.getConnection();
        String sql="select * from articleinfo where uid=?";
        PreparedStatement statement=connection.prepareStatement(sql);
        statement.setInt(1,uid);
        ResultSet resultSet=statement.executeQuery();
        while(resultSet.next()){
            ArticleInfo articleInfo=new ArticleInfo();
            articleInfo.setId((resultSet.getInt("id")));
            articleInfo.setId(resultSet.getInt("id"));
            articleInfo.setRcount(resultSet.getInt("rcount"));
            articleInfo.setTitle(resultSet.getString("title"));
            articleInfo.setContent(resultSet.getString("Content"));
            articleInfo.setCreatetime(resultSet.getDate("createtime"));
            list.add(articleInfo);
        }
        return list;
    }

    public int del(int id) throws SQLException {
        int result=0;
        if(id>0){
            Connection connection=DButils.getConnection();
            String sql="delete from articleinfo where id=?";
            PreparedStatement statement=connection.prepareStatement(sql);
            result=statement.executeUpdate();
            DButils.close(connection,statement,null);
        }
        return result;
    }
}
