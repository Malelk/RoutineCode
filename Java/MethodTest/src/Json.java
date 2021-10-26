import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import lizinuo.annotation.*;

public class Json {
    public static Object obj;

    public static void toJson(Object obj)
            throws IllegalArgumentException, IllegalAccessException, InvocationTargetException {
        StringBuffer json = new StringBuffer();
        Work(obj, json);
        System.out.println(json);
    }

    // 主要的工作函数，可以进行递归操作
    private static void Work(Object obj, StringBuffer s)
            throws IllegalArgumentException, IllegalAccessException, InvocationTargetException {

        s.append("{\n");
        // 获取所有属性
        Field[] fs = obj.getClass().getDeclaredFields();
        for (Field f : fs) {
            /**
             * 判断是否忽略
             */
            if (f.isAnnotationPresent(JsonIgnore.class))
                continue;
            /**
             * 如果是基础类型的情况
             */
            if (isBase(f)) {
                jsonBase(f, s, obj);
                continue;

            }
            /**
             * 如果是数组的情况
             */
            if (isArr(f)) {
                // System.out.println("te");
                Method tmp = gMethod(f, obj);
                if (f.isAnnotationPresent(JsonProperty.class)) {

                    s.append("\"" + f.getAnnotation(JsonProperty.class).name() + "\": [");
                } else
                    s.append("\"" + f.getName() + "\": [");
                if (tmp.invoke(obj).getClass() == int[].class) {
                    int[] is = (int[]) tmp.invoke(obj);
                    for (int i = 0; i < is.length; i++) {
                        s.append("\"" + is[i] + "\"" + ",");
                    }
                    s.deleteCharAt(s.length() - 1);
                    s.append("],\n");
                    continue;
                }
                Object[] as = (Object[]) tmp.invoke(obj);

                if (as.length == 0) {
                    s.append("],\n");
                    continue;
                }
                for (Object ob : as) {
                    s.append("\"" + ob + "\"" + ",");
                }
                s.deleteCharAt(s.length() - 1);
                s.append("],\n");
                continue;
            }
            /**
             * 若属性为对象，进行递归
             */
            if (f.isAnnotationPresent(JsonProperty.class)) {
                s.append("\"" + f.getAnnotation(JsonProperty.class).name() + "\": ");
            } else
                s.append("\"" + f.getName() + "\": ");
            Method tmp = gMethod(f, obj);
            Work(tmp.invoke(obj), s);
            s.append(",\n");
        }
        s.deleteCharAt(s.length() - 2);
        s.append("}");
        return;
    }

    /**
     * 判断是否为基础类型
     */
    private static boolean isBase(Field f) {
        boolean ans = false;
        String s = f.getType().getName();
        if (s.equals("int") || s.equals("java.lang.String") || s.equals("double") || s.equals("short")
                || s.equals("java.lang.Byte") || s.equals("float") || s.equals("boolean") || s.equals("char")
                || s.equals("long"))
            ans = true;
        return ans;
    }

    // 判断是否是数组
    private static boolean isArr(Field f) {
        boolean ans = false;
        String s = f.getType().getName();
        if (s.startsWith("["))
            ans = true;
        return ans;
    }

    /**
     * 生成基本类型的json
     * 
     * @throws IllegalAccessException
     * @throws IllegalArgumentException
     * @throws InvocationTargetException
     * 
     */
    private static void jsonBase(Field f, StringBuffer s, Object obj)
            throws IllegalArgumentException, IllegalAccessException, InvocationTargetException {
        if (f.isAnnotationPresent(JsonProperty.class)) {

            s.append("\"" + f.getAnnotation(JsonProperty.class).name() + "\": ");
        } else
            s.append("\"" + f.getName() + "\": "); // 获得变量名

        Method tmp = gMethod(f, obj);
        s.append("\"" + tmp.invoke(obj) + "\",\n");
    }

    // 获取一个属性对应的getXxx
    private static Method gMethod(Field f, Object obj) {
        Method tmp = null;
        Method[] ms = obj.getClass().getDeclaredMethods(); // 获取方法
        for (Method m : ms) {
            // System.out.println(m);
            if (m.getName().toLowerCase().equals(("get" + f.getName()).toLowerCase()))// 通过字符串匹配，得到对应的get
                tmp = m;
            if (m.getName().toLowerCase().equals(("is" + f.getName()).toLowerCase()))// 通过字符串匹配，得到对应的get
                tmp = m;
        }
        return tmp;
    }
}