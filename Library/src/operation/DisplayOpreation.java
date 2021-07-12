package operation;

import book.Book;
import book.Booklist;

public class DisplayOpreation implements IOperation{
    @Override
    public void work(Booklist booklist) {
        System.out.println("展示图书!");
        for (int i = 0; i <booklist.getUsedSize() ; i++) {
            Book book=booklist.getBook(i);
            System.out.println(book);
        }
    }
}
