package lizinuo.icu;

public class Owner {
    int[] memberAge;
    String name;

    public Owner(String name, int[] i) {
        this.name = name;
        this.memberAge = i;
    }

    public int[] getMemberAge() {
        return memberAge;
    }

    public String getName() {
        return name;
    }
}
