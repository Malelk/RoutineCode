import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.InputStream;
import java.io.*;
public class JavaT4 {
    public static void main(String[]args) throws IOException{
        File srcFile = new File("D:\\Code\\Java");
        File destFile = new File("E:\\");
        copyFolder(srcFile,destFile);
    }
/**
复制方式
copyFile(File: 被复制文件，File: 输出文件)
**/
    public static void copyFolder(File fFrom,File fTo) throws IOException{
        if(fFrom.isDirectory()) {
            String name = fFrom.getName();
            File folder = new File(fTo,name);
            if(!folder.exists()) {
                folder.mkdir();
            }
            File[] files = fFrom.listFiles();
            for(File fNow : files) {
                copyFolder(fNow, folder);
            }
        }
        else copyFile(fFrom,new File(fTo,fFrom.getName()));
    }
    public static void copyFile(File fFrom,File fTo) throws IOException{
        byte[] bys = new byte[1024];
        FileInputStream bFin = new FileInputStream(fFrom) ;
        FileOutputStream bFout = new FileOutputStream(fTo) ;
        int l = -1;
        while( (l=bFin.read(bys)) != -1) {
            bFout.write(bys, 0, l);
        }
        bFin.close();
        bFout.close();
    }
}
