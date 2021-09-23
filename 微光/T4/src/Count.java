import java.io.FileWriter;

public class Count implements Runnable {
    private int num = 0;
 //   private int count = 0;
    @Override
    public void run() {
        for (; num <= 20000; num++) {
            count++;
            System.out.println(Thread.currentThread().getName() + ":" + num);
        }
    //    System.out.println(count);
    }

}
