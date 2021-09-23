import java.io.File;

public class GetSize {
    public static long  get(File f) {
        if(f.isFile()) return  f.length();
        File[] fl = f.listFiles();
        long ans = 0;
        for(File fnow : fl) {
            ans +=get(fnow);
        }
        return ans;
        
    }
}
