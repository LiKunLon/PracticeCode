/**
 * 自定义阻塞队列
 */
package ThreadDemo0603;

import java.util.Random;

public class ThreadDemo06 {
    static class MyBlockingQueue{
        private int[] values;//实际存储数据的数组
        private int first;//队首
        private int last;//队尾
        private int size;//队列元素实际大小
        public MyBlockingQueue(int initial){
            //初始化变量
            values=new int[initial];
            first=0;
            last=0;
            size=0;

        }
        //添加元素(添加到队尾)
        public void offer(int val){
            synchronized (this){
                //判断是否存满
                if(size==values.length){
                    //队列满
                    try {
                        this.wait();
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
                //添加元素到队尾
                values[last++]=val;
                size++;
                //判断是否为最后一个元素
                if(last==values.length){
                    last=0;
                }
                //尝试唤醒消费者
                this.notify();
            }
        }
        //查询方法
        public int poll(){
            int result=-1;
            synchronized (this){
                //判断边界值
                if(size==0){
                    //队列为空，阻塞等待
                    try {
                        this.wait();
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
                //取元素
                result=values[first++];
                size--;
                //判断是否是最后一个元素
                if(first==values.length){
                    first=0;
                }
                //尝试唤醒生产者
                this.notify();
            }

            return result;
        }
    }

    public static void main(String[] args) {
        MyBlockingQueue myBlockingQueue=new MyBlockingQueue(100);
        Thread t1=new Thread(new Runnable() {
            @Override
            public void run() {
                //每隔500ms生产一条数据
                while(true){
                    int num=new Random().nextInt(10);
                    System.out.println("生成了随机数："+num);
                    myBlockingQueue.offer(num);
                    try {
                        Thread.sleep(500);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            }
        });
        t1.start();
        //创建消费者

        Thread t2=new Thread(new Runnable() {
            @Override
            public void run() {
                while(true){
                   int result=myBlockingQueue.poll();
                    System.out.println("消费了数据"+result);
                }
            }
        });
        t2.start();
    }
}






















