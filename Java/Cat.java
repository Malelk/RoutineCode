

public class Cat {
    private Stirng name;
    private String[] abilities;
    private int age;
    private boolean hasOwner;
    private String breed;
    Cat(String name,int age,boolean hasOwner,String breed,String[] abilities ) {
        this.name = name;
        this.age = age;
        this.hasOwner = hasOwner;
        this.breed = breed;
        for(int i = 0;i<abilities.length;i++) {
            this.abilities[i] = abilities[i];
        }

    }
    public int getAge() {
        return age;
    }
    public String getBreed() {
        return breed;
    }
    public Stirng getName() {
        return name;
    }
    public boolean getHasOwner() {
        return hasOwner;
    }
    public String[] getAbilities() {
        return abilities;
    }
    public void setAbilities(String[] abilities) {
        this.abilities = abilities;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void setBreed(String breed) {
        this.breed = breed;
    }
    public void setHasOwner(boolean hasOwner) {
        this.hasOwner = hasOwner;
    }
    public void setName(Stirng name) {
        this.name = name;
    }
}
