package operation;

import book.Book;
import book.Booklist;

import java.util.Scanner;

public class ReturnOpreation implements IOperation{
    @Override
    public void work(Booklist booklist) {
        System.out.println("归还图书!");
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入要归还的书名");
        String name=scanner.nextLine();

        for (int i = 0; i <booklist.getUsedSize() ; i++) {
            Book book=booklist.getBook(i);
            if(book.getName().equals(name)){
                //修改本书借阅状态
                book.setStatus(false);
                System.out.println(book);
                return;
            }
            System.out.println("没有你要归还的书!!");
        }
    }
}
