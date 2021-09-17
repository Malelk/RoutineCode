public class J3 {
    public static void main(String[] args) {
        System.out.println("=====================微光工作室爪哇招新======================");

        Object glimmer1 = new Object();
        Object glimmer2 = new Object();
        Object glimmer3 = glimmer1;

        System.out.println("Object Test 0的结果是：" + glimmer1);
        System.out.println("Object Test 1的结果是：" + (glimmer1 == glimmer2));
        System.out.println("Object Test 2的结果是：" + (glimmer1.equals(glimmer2)));
        System.out.println("Object Test 3的结果是：" +(g limmer1.equals(glimmer3)));
        System.out.println("Object Test 4的结果是：" + (glimmer1 == glimmer3));
        System.out.println("Object Test 5的结果是：" + (glimmer2.equals(glimmer3)));
        System.out.println("Object Test 6的结果是：" + (glimmer2 == glimmer3));
        System.out.println("---------------------");
        System.out.println(glimmer1);
        System.out.println(glimmer2);
        System.out.println(glimmer3);
    }
}