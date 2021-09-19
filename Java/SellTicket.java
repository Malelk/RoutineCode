public class SellTicket implements  Runnable{
    private int ticket = 100;
    private Object obj = new Object();
    public void run() {
        
        while(ticket>=0) {
            synchronized(obj) {
            System.out.println(Thread.currentThread().getName()+" "+ticket);
           
            ticket--;try {
                Thread.currentThread().sleep(100);
            } catch (InterruptedException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }   
    }          
        }

    }
}
