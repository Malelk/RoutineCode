package demo;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

public class SortTest {
    public static void main(String[] args) {
        ArrayList<Integer> myNumbers = new ArrayList<Integer>();
        myNumbers.add(10);
        myNumbers.add(98);
        myNumbers.add(20);
        myNumbers.add(25);
        List<ArrayList<Integer>> l = Arrays.asList(myNumbers);
        for (int i : myNumbers) {
            System.out.println(i);
        }
        Collections.sort(myNumbers);
        for (ArrayList<Integer> i :l) {
            System.out.println(i);
        }
    }
}
