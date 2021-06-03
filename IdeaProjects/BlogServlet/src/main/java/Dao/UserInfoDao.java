package Dao;

import models.Userinfo;
import utils.DButils;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

//用来操作userinfo表
public class UserInfoDao {
    //用户添加功能
    public static int add(String username,String password) throws SQLException {
        int result=0;
        Connection connection= DButils.getConnection();
        String sql="insert into userinfo(username,password) values(?,?)";
        PreparedStatement preparedStatement=connection.prepareStatement(sql);
        preparedStatement.setString(1,username);
        preparedStatement.setString(2,password);
        result=preparedStatement.executeUpdate();
        DButils.close(connection,preparedStatement,null);
        return result;
    }
    //查询用户(登录功能)
    public Userinfo getUser(String username,String password) throws SQLException {
        Userinfo userinfo=new Userinfo();
        Connection connection=DButils.getConnection();
        String sql="select * from userinfo where username=? and password=?";
        PreparedStatement statement=connection.prepareStatement(sql);
        statement.setString(1,username);
        statement.setString(2,password);
        //查询数据库
        ResultSet resultSet=statement.executeQuery();
        while(resultSet.next()){
            userinfo.setId(resultSet.getInt("id"));
            userinfo.setUsername(resultSet.getString("username"));
            userinfo.setPassword(resultSet.getString("password"));
        }
        DButils.close(connection,statement,resultSet);
        return  userinfo;
    }

}


