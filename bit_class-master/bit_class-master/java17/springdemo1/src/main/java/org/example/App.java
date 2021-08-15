package org.example;

import org.example.controller.LoginController;
import org.example.controller.URLController;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;

public class App {
    public static void main(String[] args) {
        ApplicationContext context =
                new ClassPathXmlApplicationContext("beans.xml");
//        LoginController loginController =
//                (LoginController) context.getBean("loginController");
//        System.out.println(loginController);

        URLController urlController =
                (URLController) context.getBean("URLController");
        System.out.println(urlController);


//        LoginController loginController2 =
//                context.getBean(LoginController.class);
//        System.out.println(loginController2);

        // 关闭资源
        ((ClassPathXmlApplicationContext) context).close();

    }
}
