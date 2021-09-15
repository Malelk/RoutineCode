import java.io.*;
public class FFF {
    
    public static void main(String[] args) throws IOException{
        File f1 = new File("D:\\Code\\Java\\File\\Data.txt");
        FileInputStream f5 = new FileInputStream("D:\\Code\\Java\\File\\Data.txt");
        System.out.println(f5.read()+f5.read());
        System.out.println(f1.createNewFile());
   //     f1.createNewFile();
        File f2 = new File("D:\\Code\\Java","File\\test\\t1\\t2");
    //  System.out.println(f2.mkdir());
        f2.mkdirs();
        f2.delete();
        FileOutputStream f3 = new FileOutputStream(f1);
        byte[] aa = "abcde".getBytes();
        f3.write(aa,1,aa.length-1);
        f3.close();
        f5.close();
    }
}