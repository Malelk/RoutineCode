import java.io.*;
public class Copy extends Thread{
    File f1 = null,f2 = null;

    Copy(File f11,File f22) {
        f1 = f11;
        f2 = f22;
    }
    public static void copyFile(Copy c,File fFrom,File fTo) throws IOException{
   //     System.out.println("fuckkk"+" "+fFrom.getPath()+" "+fTo.getPath());
        byte[] bys = new byte[1024];
        FileInputStream bFin = new FileInputStream(fFrom) ;
        FileOutputStream bFout = new FileOutputStream(fTo) ;
        int l = -1;
        while( (l=bFin.read(bys)) != -1) {
            bFout.write(bys, 0, l);
            App.cnt+=(long)l;
            if((double)App.cnt/(double)App.tot>(double)App.now/100) {
                
                System.out.println("Copying Have Done "+(double)App.cnt/(double)App.tot*100+"%");
                App.now++;
            }
            
        }
        bFin.close();
        bFout.close();
    }
    @Override
    public void run() {
        System.out.println(this.currentThread().getName()+"  Copying "+f1.getName());
        try {
            copyFile(this,f1,f2);
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        return;
    }
}