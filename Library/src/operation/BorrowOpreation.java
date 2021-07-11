package operation;

import book.Book;
import book.Booklist;

import java.util.Scanner;

public class BorrowOpreation implements IOperation {
    @Override
    public void work(Booklist booklist) {
        System.out.println("借阅书籍!");
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入要借阅的书名:");
        String name=scanner.nextLine();
        for (int i = 0; i <booklist.getUsedSize() ; i++) {
            Book book=booklist.getBook(i);
            if(book.getName().equals(name)){
                //if成立,说明存在这本书
                //修改借阅状态为true
                book.setStatus(true);
                System.out.println(book);
                return;
            }
        }
        System.out.println("没有你要借的书!!");
    }
}
