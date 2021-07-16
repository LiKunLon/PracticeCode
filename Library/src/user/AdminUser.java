package user;

import operation.*;

import java.util.Scanner;

//管理员
public class AdminUser extends User {

    public AdminUser(String name) {
        super(name);
        this.iOperations=new IOperation[]{
                new ExitOpreation(),
                new FindOperation(),
                new AddOperation(),
                new DelOperation(),
                new DisplayOpreation()
        };

    }

    @Override
    public int menu() {
        Scanner scanner=new Scanner(System.in);
        System.out.println("======================");
        System.out.println("hello"+ this.name +" 欢迎来到图书管理系统!!");
        System.out.println("1.查找图书");
        System.out.println("2.添加图书");
        System.out.println("3.删除图书");
        System.out.println("4.显示图书");
        System.out.println("0.退出图书");
        System.out.println("======================");
        int choice=scanner.nextInt();
        return choice;
    }
}
