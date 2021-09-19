public class Ticket {
    public static void main(String[]args) {
        SellTicket st = new SellTicket();
        Thread t1 = new Thread(st,"1");
        Thread t2 = new Thread(st,"2");
        Thread t3 = new Thread(st,"3");
        t1.start();
        t2.start();
        t3.start();
      
    }
}
