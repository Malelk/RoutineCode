public class SellTicket implements Runnable {
    private int ticket = 100;
    private Object obj = new Object();

    public void run() {
    while(true) {
       synchronized(obj) {

            if(ticket>0) { 
            System.out.println(Thread.currentThread().getName()+" "+ticket);
            ticket--;                
        

           try {
            Thread.currentThread().sleep(100);
        } catch (InterruptedException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
            }         
     }

           
    }
}
    // while(true) {
    // synchronized(obj) {
    // if(ticket>0) {
    // System.out.println(Thread.currentThread().getName()+" "+ticket);
    // ticket--;
    // }

    // }
    // }
    // }
    public int getTicket() {
        return ticket;
    }
}
