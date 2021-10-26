package Try;

public class LambdaDemo {
    public static void main(String[]args) {
        MyRunnable my = new MyRunnable();
        Thread t = new Thread(my);
        t.start();
        new Thread(new Runnable(){

            @Override
            public void run() {
                // TODO Auto-generated method stub
                System.out.println("Nimin");
            }
            
        }).start();
        new Thread(() -> {
            System.out.println("Lambda");
        }).start();
    }
}
