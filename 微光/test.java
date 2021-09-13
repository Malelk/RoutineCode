import java.util.Scanner; 
public class test {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int a = cin.nextInt();
        int ans = 0;
        for(int i = 1; i <= a; i++) {
            int cnt = 1;
            for(int j = 1;j <= i; j++) {
                cnt*=j;
            }
            ans+=cnt;
        }
        System.out.println(ans);
    }
}