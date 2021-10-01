import lizinuo.icu.Cat;
import lizinuo.icu.Owner;

public class App {
    public static void main(String[] args) throws Exception {
        Cat myCat = new Cat("Pickle", 2, true, "American Shorthair", new String[] { "ear", "sleep", "run" },
                new Owner("Glimmer", new int[] { 24, 19, 18 }));
        Json.toJson(myCat);
    }
}
