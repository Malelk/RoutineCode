import java.io.FileWriter;

public class App {
    public static void main(String[] args) throws Exception {
      //  FileWriter fw = new FileWriter("data.out");
        Count ct = new Count();
        Thread t1 = new Thread(ct);
        Thread t2 = new Thread(ct);
        t1.start();
        t2.start();  
      //  t3.start();
      //  t4.start();     
    }
}
