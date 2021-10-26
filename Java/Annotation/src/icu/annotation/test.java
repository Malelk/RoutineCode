package icu.annotation;

import java.lang.annotation.Annotation;
import java.lang.reflect.Method;

public class test {
    public static void main(String[]args) {
    initDemo clazz = new initDemo();
    Class c = clazz.getClass();
    Method[] ms = c.getDeclaredMethods();
    for(Method m:ms) {
        System.out.println(m+" "+m.isAnnotationPresent(initMethod.class));
    }        
    }

}
