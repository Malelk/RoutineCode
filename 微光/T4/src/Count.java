import java.io.FileWriter;
import java.io.IOException;

public class Count implements Runnable {
  private int num = 0;
  Object obj = new Object();

  // private int count = 0;
  @Override
  public void run() {

    for (int i = 0; i < 1000; i++) {
      cnt();
    }
  }
  private synchronized  void cnt() {
        num++;
        System.out.println(Thread.currentThread().getName() + ":" + num);
  }

}
