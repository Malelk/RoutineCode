package demo;

public class Dog implements Comparable<Dog>{
    int age;
    Dog(int i) {
        age = i;
    }


    @Override
    public int compareTo(Dog o) {
        // TODO Auto-generated method stub
        if(this.age>=o.age) return 1;
        else return -1;
    }
}