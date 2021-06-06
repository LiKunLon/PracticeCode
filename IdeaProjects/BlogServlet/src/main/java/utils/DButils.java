package utils;


import com.mysql.jdbc.jdbc2.optional.MysqlDataSource;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class DButils {
    private static MysqlDataSource dataSource=null;
    public static Connection getConnection() throws SQLException {
        if(dataSource==null){
            //第一次
            dataSource=new MysqlDataSource();
            //String url="jdbc:mysql://127.0.0.1:3306/java18blog?charactionEncoding=utf-8&useSSL=true";
            //String user="root";
            //String password="111111";
            dataSource.setUrl("jdbc:mysql://127.0.0.1:3306/java18blog?charactionEncoding=utf-8&useSSL=true");
            dataSource.setUser("root");
            dataSource.setPassword("111111");
            //return (Connection) dataSource.getConnection();
        }
        return dataSource.getConnection();
    }
    public static void close(Connection connection, PreparedStatement preparedStatement, ResultSet resultSet) throws SQLException {
        if(resultSet!=null) resultSet.close();
        if(preparedStatement!=null) preparedStatement.close();;
        if(connection!=null)connection.close();

    }
}

