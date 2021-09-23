import java.io.*;
import java.util.ArrayList;

public class Work {
    public static void folderCopy(File f1,File f2) throws IOException{
        if(!f2.exists()) f2.mkdirs();
        if(f1.isDirectory()) {            
            String n1 = f1.getName();
            File f3 = new File(f2,n1);
            if(!f3.exists()) 
                f3.mkdir();
            File[] fList = f1.listFiles();
            ArrayList<Thread> taskList = new ArrayList<>();
            for(File fnow:fList) {
                if(fnow.isDirectory()) {
                    folderCopy(fnow, f3);
                }
                else {
                    taskList.add(new Copy(fnow, new File(f3,fnow.getName())));
                }
            }
             for(Thread task:taskList) {
                 task.start();
             }
        }
        return;
    }

}
