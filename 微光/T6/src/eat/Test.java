package eat;

import java.nio.file.WatchService;

public class Test {
    public static void main(String[]args) {
    //    Eatable e = new EatImp();
     //   e.eat("woc");
    //    useEatable(e);
        useEatable(new Eatable(){

            @Override
            public void eat(String name) {
                // TODO Auto-generated method stub
                System.out.println(name+"\nwwwww");
            
            }
            
        },"Canshu");
        //匿名内部类
        // useEatable(new Eatable(){

        //     @Override
        //     public void eat(String a) {
        //         // TODO Auto-generated method stub
        //         System.out.println(a);
        //     }
            
        // });
        // useEatable(()->{
        //     System.out.println("lam");
        // });
    }
    public static void useEatable(Eatable e,String s) {
      // e.eat();
      e.eat(s);
    }
}
