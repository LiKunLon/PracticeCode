package operation;

import book.Book;
import book.Booklist;

import java.util.Scanner;

public class FindOperation implements IOperation{
    @Override
    public void work(Booklist booklist) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入要查找书籍的名字:");
        String name=scanner.nextLine();
        //开始遍历
        for (int i = 0; i <booklist.getUsedSize() ; i++) {
            Book book=booklist.getBook(i);
            if(book.getName().equals(name)){
                System.out.println("找到了!");
                System.out.println(book);
                return;
            }
        }
        System.out.println("找不到!");
    }
}
