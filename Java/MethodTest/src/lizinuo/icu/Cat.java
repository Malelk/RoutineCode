package lizinuo.icu;
import lizinuo.annotation.JsonIgnore;
import lizinuo.annotation.JsonProperty;
public class Cat {
    @JsonIgnore
    private String name;
    private int age;
   // @JsonIgnore
    private boolean hasOwner;
    private String breed;
    @JsonProperty(name="nengLi")
    private String[] abilities =null;
    @JsonProperty(name = "zhuRen")
    private Owner owner;
    Cat() {
    };
    
    public Cat(String name, int age, boolean hasOwner, String breed, String[] abilities,Owner owner) {
        this.name = name;
        this.age = age;
        this.hasOwner = hasOwner;
        this.breed = breed;
        this.abilities = abilities;
        // for (int i = 0; i < abilities.length; i++) {
           
        //     this.abilities[i] = abilities[i]; //System.out.println(abilities[i]);
        // }
        this.owner = owner;
    }
    public Owner getOwner() {
        return owner;
    }
    public String[] getAbilities() {
        String[] tmp = new String[abilities.length];
        for(int i = 0;i< tmp.length;i++) {
            tmp[i] = abilities[i];
        }
        return tmp;
    }
    public int getAge() {
        return age;
    }
    public String getBreed() {
        return breed;
    }
    public String getName() {
        return name;
    }
    public boolean isHasOwner() {
        return hasOwner;
    }
}
