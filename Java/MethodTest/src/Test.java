import java.lang.ProcessBuilder.Redirect.Type;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;


public class Test {

  public static void main(String[] args) throws ClassNotFoundException, NoSuchMethodException, SecurityException,
      IllegalArgumentException, IllegalAccessException, InvocationTargetException {
    
  //     Dog dog = new Dog(11, "Bin");
  //   // Json j = new Json();
  //   // j.toJson(new Object());
  //  // System.out.println(dog.getAge());
  //   Json j = new Json();
  //   j.toJson(dog);
  //   //System.out.println(dog.getIs()[0]);
  //   Field[] f = dog.getClass().getDeclaredFields();
  //   //System.out.println(tf[0].getName()+" "+ tf[0].get(t));
  //   for (Field ff : f) {

  //    // System.out.println(ff.getType().getName());//
  //   }

    /**6
     * 使用反射使用方法
     */
    // Method[] methods3 = dog.getClass().getMethods();
    // for(Method m:methods3) {
    // System.out.println(methods3[3]);
    // }
    // //methods3[2].invoke(dog, 10086);
    // System.out.println(methods3[3].invoke(dog));
    // System.out.println(methods3[3].getReturnType());
  }
}
