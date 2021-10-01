package icu.uestc;
import com.alibaba;
public class App {
    public static void main(String[] args) throws Exception {
        JSONObject obj = new JSONObject();
        Cat cat = new Cat("Glimmer",5,false,"AABB",new String[]  {"eat","run","ganEn"});
        System.out.println(JSON.toJSONString(cat));

    }
}
