import java.util.*;
public class jisuanqi {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int a = cin.nextInt(); 
        String s = cin.next();
        char c = (char)s.charAt(0);
        int b = cin.nextInt();
        cin.close();
        if(c == '+') {
            System.out.println(a+" "+c+" "+b+" "+"="+ (a+b));
        }
        if(c == '-') System.out.println(a+" "+c+" "+b+" "+"="+(a-b));
        if(c == '*') System.out.println(a+" "+c+" "+b+" "+"="+a*b);
//        System.out.println(a/b);
        if(c == '/') 
            if(b*(a/b)!=a) System.out.println(a+" "+c+" "+b+" "+"="+a/b+"......"+(a-b*(a/b)));
            else System.out.println(a+" "+c+" "+b+" "+"="+a/b);
        if(c == '%') System.out.println(a+" "+c+" "+b+" "+"="+(a-b*(a/b)));
    }
}
