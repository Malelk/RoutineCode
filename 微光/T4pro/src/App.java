import java.io.File;
import java.util.Scanner;

public class App {
        public static long cnt = 0;
        public static long tot = 0;
        public static long now = 0;
    public static void main(String[] args) throws Exception {

        System.out.println("Input A Folder PATH");
        Scanner cin = new Scanner(System.in);
        String path = cin.nextLine();
        File fFrom = new File(path);
        tot =GetSize.get(fFrom);
        System.out.println("Input A Folder PATH");
        path = cin.nextLine();
        File fTo    = new File(path);
       // long startTime = System.currentTimeMillis();
       
        Work.folderCopy(fFrom,fTo);
 //       System.out.println("Work Have Been DONE");
        
     //   System.out.println("End");
        cin.close();
        return;

    }
    // public long getCnt() {
    //     return cnt;
    // }
    // public long getTot() {
    //     return tot;
    // }
    // public void setCnt(long cnt) {
    //     this.cnt = cnt;
    // }
    // public void setTot(long tot) {
    //     this.tot = tot;
    // }
}
