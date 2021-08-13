package org.example;

import com.mysql.jdbc.jdbc2.optional.MysqlDataSource;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class App 
{
    public static void main( String[] args ) throws SQLException {
        // 1.获取数据仓库 DataSource
        MysqlDataSource dataSource = new MysqlDataSource();
        // datasource 设置 3 个信息
        dataSource.setURL("jdbc:mysql://127.0.0.1:3306/java17?characterEncoding=utf8&useSSL=true");
        dataSource.setUser("root");
        // 写你们自己的密码
        dataSource.setPassword("root");

        // 2.获取连接 Connection
        Connection connection = dataSource.getConnection();

        // 3.拼接SQL
        String sql = "select * from student where id=?";
        PreparedStatement statement =
                connection.prepareStatement(sql);
        statement.setInt(1,2);

        // 4.查询SQL
        ResultSet resultSet = statement.executeQuery();

        while (resultSet.next()){
            System.out.printf("ID:%d,name:%s",
                    resultSet.getInt("id"),
                    resultSet.getString("name"));
        }

        // 5.关闭数据库
        resultSet.close();
        statement.close();
        connection.close();

    }
}
