package thread.thread_0525;

/**
 * 懒汉方式 V3 
 */
public class ThreadDemo88 {
    static class Singleton {
        // 1.创建一个私有的构造函数（方法其他地方直接实例化）
        private Singleton() {
        }

        // 2.创建一个私有的类对象（volatile）
        private static volatile Singleton singleton = null;

        // 3.提供统一的访问入口（方法）
        public static Singleton getInstance() {
            if (singleton == null) {
                synchronized (Singleton.class) {
                    if (singleton == null) {
                        // 第一次访问
                        singleton = new Singleton();
                    }
                }
            }
            return singleton;
        }
    }

    private static Singleton s1 = null;
    private static Singleton s2 = null;

    public static void main(String[] args) throws InterruptedException {
        // 创建新线程执行任务
        Thread t1 = new Thread(new Runnable() {
            @Override
            public void run() {
                s1 = Singleton.getInstance();
            }
        });
        t1.start();

        // 使用主线程执行任务
        s2 = Singleton.getInstance();
        // 等待 t1 执行完
        t1.join();

        System.out.println(s1 == s2);

    }
}
