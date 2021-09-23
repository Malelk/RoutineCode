import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

public class TestFile {
    public static void main(String[] args)  throws IOException  {
        // Scanner cin = new Scanner(System.in);
        // String s = cin.nextLine();
        // D:\\Code
        File fin = new File("D:\\Code\\Java\\File");
        File fout = new File("D:\\Code\\Java\\Copy");
        if(!fout.exists()) {
                fout.mkdir();
                
        }
        File[] fl = fin.listFiles();
        for(File fk:fl) {
            String name = fk.getName();
            File destFile = new File(fout,name);
            copyFile(fk,destFile);
        }

    //     int cnt = ips.read();
    //     while(cnt!=-1) {
    //         ops.write(cnt);
    //         cnt = ips.read();
    //       //  System.out.println((char)cnt);
    //     }
    //    // System.out.println(f.getAbsolutePath());
    //     // f.delete();
    //     // get(f);
    //     ops.close();
    //     ips.close();
    }

    private static void copyFile(File fk, File destFile) throws IOException{
        if(!destFile.exists())
                destFile.createNewFile();

        if(fk.isDirectory()) {
            File[] fl = fk.listFiles();
            for(File fFrom:fl) {
                String name = fFrom.getName();
                File fk2 = new File(fk,name);
                File destFile2 = new File(destFile,name);
                copyFile(fk,destFile2);
            }
            return;
        }
        BufferedInputStream bfin = new BufferedInputStream(new FileInputStream(fk));
        BufferedOutputStream bfout = new BufferedOutputStream(new FileOutputStream(destFile));
        byte[] bys = new byte[1024];
        int l;
        while((l=bfin.read(bys))!=-1) {
            bfout.write(bys,0,l);
        }
        bfin.close();
        bfout.close();
    }

    public static void get(File f) {
        if (f.isDirectory()) {
            File[] fa = f.listFiles();
            for (File ff : fa) {
                if (ff.isDirectory())
                    get(ff);
                else {
                    System.out.println(ff.getAbsolutePath());
                }
            }
        } else
            System.out.println(f.getAbsolutePath());

    }
}

// File fd[] = f.listFiles();
// for(File ff : fd) {
// System.out.println(ff.getName());
// }
// f.mkdir();