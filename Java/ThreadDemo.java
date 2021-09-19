public class ThreadDemo {
    public static void main(String[] args) {
        ThreadTest t1 = new ThreadTest();
        ThreadTest t2 = new ThreadTest();  

        t1.setPriority(1);
        t2.setPriority(10);        
        System.out.println(t1.getPriority());
        System.out.println(t2.getPriority());
        t1.start(); 
        try {
            t1.join();
        } catch (InterruptedException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        t2.start();
    }
}
