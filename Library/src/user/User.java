package user;

import book.Booklist;
import operation.IOperation;

public abstract class User{
    public String name;
    public IOperation[] iOperations;
    public User (String name){
        this.name=name;
    }
    public abstract int menu();
    public void doOperations(int choice, Booklist booklist){
        //用choice来调用对应类的work()方法
        this.iOperations[choice].work(booklist);
    }


}
