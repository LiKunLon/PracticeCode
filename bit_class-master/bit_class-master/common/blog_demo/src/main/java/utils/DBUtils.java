package utils;


import com.mysql.cj.jdbc.MysqlDataSource;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class DBUtils {

    private static final String MYSQL_URL = "jdbc:mysql://127.0.0.1:3306/myblogdb?characterEncoding=utf-8&useSSL=true";
    private static final String MYSQL8_URL = "jdbc:mysql://localhost:3306/myblogdb?user=root&password=root&useSSL=false&allowPublicKeyRetrieval=true&serverTimezone=UTC";
    private static final String MYSQL_USER = "root";
    private static final String MYSQL_PWD = "root";

    private static volatile MysqlDataSource dataSource = null;

    public DBUtils() {

    }

    public static MysqlDataSource getInstance() {
        if (dataSource == null) {
            synchronized (DBUtils.class) {
                if (dataSource == null) {
                    dataSource = new MysqlDataSource();
                    dataSource.setURL(MYSQL8_URL);
                    dataSource.setDatabaseName(MYSQL_USER);
                    dataSource.setPassword(MYSQL_PWD);
                }
            }
        }
        return dataSource;
    }

    // 获取连接
    public Connection getConnection() throws SQLException {
        return DBUtils.getInstance().getConnection();
    }

    // 关闭连接
    public void close(Connection connection, PreparedStatement statement, ResultSet resultSet) {
        try {
            if (resultSet != null) {
                resultSet.close();
            }
            if (statement != null) {
                statement.close();
            }
            if (connection != null) {
                connection.close();
            }
        } catch (SQLException throwables) {
            throwables.printStackTrace();
        }
    }
}
