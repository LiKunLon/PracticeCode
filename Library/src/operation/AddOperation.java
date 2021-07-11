package operation;

import book.Book;
import book.Booklist;

import java.util.Scanner;

public class AddOperation implements IOperation {
    @Override
    public void work(Booklist booklist) {
        System.out.println("添加书籍!");
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入图书名字:");
        String name=scanner.nextLine();
        System.out.println("请输入图书作者:");
        String author=scanner.nextLine();
        System.out.println("请输入图书价格:");
        int price=scanner.nextInt();
        System.out.println("请输入图书类型");
        String type=scanner.nextLine();
        Book book=new Book(name,author,price,type);
        int currentSize=booklist.getUsedSize();
        booklist.setBooks(currentSize,book);
        booklist.setUsedSize(currentSize+1);
    }
}
