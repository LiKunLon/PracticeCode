package operation;

import book.Booklist;

public class ExitOpreation implements IOperation{
    @Override
    public void work(Booklist booklist) {
        System.out.println("退出系统!");
        System.exit(1);
    }
}
