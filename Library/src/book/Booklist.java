package book;

public class Booklist {
    private int usedSize;
    private Book[] books;

    public Booklist() {
        this.books = new Book[10];
        books[0]=new Book("三国演义","罗贯中",11,"战国");
        books[1]=new Book("西游记","吴承恩",21,"玄幻");
        books[2]=new Book("红楼梦","曹雪芹",31,"言情");
        books[3]=new Book("水浒传","施耐庵",41,"侠义");
        books[4]=new Book("三体","刘慈欣",51,"科幻");
        this.usedSize=3;
    }
    //尾插法
    public void setBooks(int pos,Book book){
        this.books[pos]=book;
    }
    public Book getBook(int pos){
        return this.books[pos];
    }
    public int getUsedSize(){
        return usedSize;
    }
    public void setUsedSize(int usedSize){
        this.usedSize=usedSize;
    }
}
