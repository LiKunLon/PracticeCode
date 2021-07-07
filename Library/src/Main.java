import book.Booklist;
import user.AdminUser;
import user.NormalUser;
import user.User;

import java.util.Scanner;

public class Main {
    public static User login(){
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入你的姓名:");
        String name=scanner.nextLine();
        System.out.println("1->管理员----2->普通用户");
        int choice=scanner.nextInt();
        if(choice==1){
            return  new AdminUser(name);
        }else{
            return new NormalUser(name);
        }
    }

    public static void main(String[] args) {
        Booklist booklist=new Booklist();
        /**
         * 1.登录:user引用一个对象,这个对象就是login()方法的返回值
         * 不是AdminUser就是NormalUser
         */
        User user=login();
        while(true){
            /**
             * user来调用菜单函数
             * choice来接收菜单函数的返回值
             */
            int choice=user.menu();
            user.doOperations(choice,booklist);
        }
    }
}
