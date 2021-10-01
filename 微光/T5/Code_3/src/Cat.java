public class Cat {
    private String name;
    private String[] abilities = new String[105];
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
    public String getName() {
        return name;
    }
    public boolean getHasOwner() {
        return hasOwner;
    }
    public String[] getAbilities() {
        return abilities;
    }
    public void setAbilities(String[] abilities) {
        this.abilities = new int[abilities.length];
        System.arraycopy(abilities, 0, this.abilities, 0, abilities.length);
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
    public void setName(String name) {
        this.name = name;
    }
    public void toJson() {
        System.out.println("{");
        System.out.println("\"name\": "+"\""+getName()+"\",");
        System.out.println("\"age\": "+"\""+getAge()+"\",");
        System.out.println("\"hasOwner\": "+"\""+getHasOwner()+"\",");
        System.out.println("\"Breed\": "+"\""+getBreed()+"\",");

        System.out.println("\"name\": "+"\""+getName()+"\",");
        System.out.println("}");
    }
}

