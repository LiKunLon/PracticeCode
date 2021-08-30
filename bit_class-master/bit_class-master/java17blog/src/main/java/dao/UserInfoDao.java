package dao;

import models.UserInfo;
import utils.DBUtils;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

/**
 * userinfo 的数据操作方法
 * 增、删、改、查
 */
public class UserInfoDao {

    /**
     * 添加方法
     * @param userInfo
     * @return
     */
    public boolean add(UserInfo userInfo) throws SQLException {
        boolean result = false;
        if (userInfo.getUsername() != null
                && userInfo.getPassword() != null) {
            // 正常的参数
            Connection connection = DBUtils.getConnect();
            String sql = "insert into userinfo(username,password) values(?,?)";
            PreparedStatement statement = connection.prepareStatement(sql);
            statement.setString(1, userInfo.getUsername());
            statement.setString(2, userInfo.getPassword());
            result = statement.executeUpdate() >= 1 ? true : false;
            // 关闭连接
            DBUtils.close(connection, statement, null);
        }
        return result;
    }

    /**
     * 登录方法
     * @param userInfo
     * @return
     */
    public boolean isLogin(UserInfo userInfo) throws SQLException {
        boolean result = false;
        if (userInfo.getUsername() != null &&
                userInfo.getPassword() != null &&
                !userInfo.getUsername().equals("") &&
                !userInfo.getPassword().equals("")
        ) {
            Connection connection = DBUtils.getConnect();
            String sql = "select * from userinfo where username=? " +
                    "and password=? and state=1";
            PreparedStatement statement = connection.prepareStatement(
                    sql);
            statement.setString(1, userInfo.getUsername());
            statement.setString(2, userInfo.getPassword());
            ResultSet resultSet = statement.executeQuery();
            if (resultSet.next()) {
                result = true;
            }
            // 关闭连接
            DBUtils.close(connection, statement, resultSet);
        }
        return result;
    }


    /**
     * 获取 userinfo 对象
     * @param userInfo
     * @return
     * @throws SQLException
     */
    public UserInfo getUserInfo(UserInfo userInfo) throws SQLException {
        UserInfo user = new UserInfo();
        // todo:非空效验
        Connection connection = DBUtils.getConnect();
        String sql = "select * from userinfo where username=? " +
                "and password=? and state=1";
        PreparedStatement statement = connection.prepareStatement(
                sql);
        statement.setString(1, userInfo.getUsername());
        statement.setString(2, userInfo.getPassword());
        ResultSet resultSet = statement.executeQuery();
        if (resultSet.next()) {
            // 获取并设置id
            user.setId(resultSet.getInt("id"));
            user.setUsername(resultSet.getString("username"));
            user.setPassword(resultSet.getString("password"));
        }
        // 关闭连接
        DBUtils.close(connection, statement, resultSet);
        return user;
    }

}
