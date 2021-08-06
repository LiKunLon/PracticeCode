package dao;

import models.UserInfo;
import utils.DBUtils;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class UserDAO {

    // 添加方法
    public boolean add(String username, String pwd) throws SQLException {
        if (username == null || pwd == null ||
                username.equals("") || pwd.equals("")) {
            return false;
        }
        DBUtils dbUtils = new DBUtils();
        // 1.得到连接
        Connection connection = dbUtils.getConnection();
        // 2.拼接SQL
        String sql = "insert into userinfo(username,pwd) values(?,?)";
        // 3.执行SQL
        PreparedStatement statement = connection.prepareStatement(sql);
        statement.setString(1, username);
        statement.setString(2, pwd);
        boolean result = statement.executeUpdate() > 0;
        // 4.关闭连接
        dbUtils.close(connection, statement, null);
        return result;
    }

    // 查询方法
    public UserInfo getUserByName(String username) throws SQLException {
        UserInfo userInfo = null;
        if (username != null && !username.equals("")) {
            // 1.得到连接
            DBUtils dbUtils = new DBUtils();
            Connection connection = dbUtils.getConnection();
            // 2.拼接sql
            String sql = "select * from userinfo where username=?";
            // 3.执行sql
            PreparedStatement statement = connection.prepareStatement(sql);
            statement.setString(1, username);
            // 4.遍历结果
            ResultSet resultSet = statement.executeQuery();
            if (resultSet.next()) {
                userInfo = new UserInfo();
                userInfo.setId(resultSet.getInt("id"));
                userInfo.setUsername(resultSet.getString("username"));
                userInfo.setPwd(resultSet.getString("pwd"));
            }
            // 5.关闭连接
            dbUtils.close(connection, statement, resultSet);
        }
        return userInfo;
    }

}
