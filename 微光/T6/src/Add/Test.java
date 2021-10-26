package Add;

public class Test {
    public static void main(String[]args) {
        add((int x,int y)->{
            System.out.println("lam");
            return x*y;
        });
    }

    private static void add(Addable a) {
        int sum = a.add(10, 20);
        System.out.println(sum);
    }
}
