import com.mysql.jdbc.jdbc2.optional.MysqlDataSource;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class MySQLSelect {

    public static void main(String[] args) throws SQLException {
        String sqlStr = "jdbc:mysql://127.0.0.1:3306/java31?characterEncoding=utf-8&useSSL=true";
        MysqlDataSource mysqlDataSource = new MysqlDataSource();
        mysqlDataSource.setURL(sqlStr);
        mysqlDataSource.setUser("root");
        mysqlDataSource.setPassword("root");
        Connection connection = mysqlDataSource.getConnection();
        String sql = "select * from student limit 10;";
        PreparedStatement statement = connection.prepareStatement(sql);
        ResultSet resultSet = statement.executeQuery();
        while (resultSet.next()){
            System.out.println(resultSet.getString("name"));
        }
        resultSet.close();
        statement.close();
        connection.close();
    }

}
