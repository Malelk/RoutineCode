package demo;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;
public class Count_2 {
 public static void main(String[] args) {
 String text = "In a village of La Mancha, the name of which I have no desire to call to\n"
 + "mind, there lived not long since one of those gentlemen that keep a lance\n"
 + "in the lance-rack, an old buckler, a lean hack, and a greyhound for\n"
 + "coursing. An olla of rather more beef than mutton, a salad on most\n"
 + "nights, scraps on Saturdays, lentils on Fridays, and a pigeon or so extra\n"
 + "on Sundays, made away with three-quarters of his income.";
 top3(text,4);
 }
 public static void top3(String s,int t) {
    System.out.println(s.replaceAll("[' '\n.\"]",","));
 Stream.of(s.replaceAll("[' '\n'.'\"]",",").split(",*,")).collect(Collectors.groupingBy(x->x,Collectors.counting())).entrySet().stream().sorted((o1,o2)->{if(o2.getValue() >
o1.getValue()) return 1;else return -1;}).limit(3).forEach( o ->
{System.out.println(o.getKey()+" "+o.getValue());}); 
 }
}