package operation;

import book.Book;
import book.Booklist;

import java.util.Scanner;

public class DelOperation implements IOperation{
    @Override
    public void work(Booklist booklist) {
        System.out.println("删除书籍!");

        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入所要删除的书名:");
        String name=scanner.nextLine();
        int i=0;
        for (; i <booklist.getUsedSize() ; i++) {
            Book book=booklist.getBook(i);
            if(book.getName().equals(name)){
                //说明找到了这本书
                break;
            }
        }
        /**
         * 退出有两种情况:
         * 1.不满足循环条件
         * 2.break
         */
        if(i>booklist.getUsedSize()){
            System.out.println("不存在要删除的书籍");
            return;
        }
        //开始删
        int pos=i;
        //把后一个给前一个
        //<usedSize-1防止j越界
        for(int j=pos;j<booklist.getUsedSize()-1;j++){
            Book book=booklist.getBook(j+1);
            booklist.setBooks(j,book);
        }
        int currentSize=booklist.getUsedSize();
        booklist.setUsedSize(currentSize-1);
        System.out.println("删除成功!!!");
    }
}
