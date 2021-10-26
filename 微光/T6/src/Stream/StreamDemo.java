package Stream;

import java.util.ArrayList;
import java.util.List;

public class StreamDemo {
    static ArrayList<String> list = new ArrayList<String>();

    public static void main(String[] args) {
        list.add("First");
        list.add("Second");
        list.add("Tree");
        list.add("Third");
        list.add("Three");
        list.add("Tree");
        list.add("Tree");
        
        // ArrayList<String> Tl =new ArrayList<String>();
        list.stream().sorted((s1,s2)->(s2.length()-s1.length()))
            .forEach(s->{System.out.println(s);});
    }

}
