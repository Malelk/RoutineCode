import java.util.*;
import java.io.*;

public class JiSuanqiPro {

    public static void main(String[] args) throws IOException {
        File f = new File("D:\\Code\\Java\\Data.txt");
        Scanner cin = new Scanner(System.in);
        FileInputStream fin = new FileInputStream(f);
        int i = fin.read();
        while (i != -1) {
            System.out.print((char) i);
            i = fin.read();
        }
        int a = 0;
        int b = 0;
        char c = 0;
        String s = "";
        String result = "";
        boolean flag = false;
        while (true) {
            if (flag) {
                a = Integer.parseInt(s);
                flag = false;
            } else
                a = cin.nextInt();

            s = "";
            s = cin.next();
            c = (char) s.charAt(0);

            b = cin.nextInt();

            result = "";
            if (c == '+') {
                System.out.println(a + " " + c + " " + b + " " + "=" + (a + b));
                result = (a + " " + c + " " + b + " " + "=" + (a + b));

            }
            if (c == '-') {
                System.out.println(a + " " + c + " " + b + " " + "=" + (a - b));
                result = (a + " " + c + " " + b + " " + "=" + (a - b));

            }
            if (c == '*') {
                System.out.println(a + " " + c + " " + b + " " + "=" + a * b);
                result = (a + " " + c + " " + b + " " + "=" + (a * b));
            }
            if (c == '/')
                if (b * (a / b) != a) {
                    System.out.println(a + " " + c + " " + b + " " + "=" + a / b + "......" + (a - b * (a / b)));
                    result = (a + " " + c + " " + b + " " + "=" + a / b + "......" + (a - b * (a / b)));
                } else {
                    System.out.println(a + " " + c + " " + b + " " + "=" + a / b);
                    result = (a + " " + c + " " + b + " " + "=" + a / b);
                }
            if (c == '%') {
                System.out.println(a + " " + c + " " + b + " " + "=" + (a - b * (a / b)));
                result = (a + " " + c + " " + b + " " + "=" + (a - b * (a / b)));
            }
            s = "";
            s = cin.next();

            if (s.charAt(0) == 's') {
                FileWriter fuck = new FileWriter("D:\\Code\\Java\\Data.txt");
                fuck.write(result);
                fuck.close();
                return;
            } else
                flag = true;
        }
    }
}
