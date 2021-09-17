class Teacher implements Cloneable{
    
    private String name;
    private int age;

    @Override
    public Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
    public Teacher(String N,int Ag) {
        age = Ag;
        name = N;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void setName(String name) {
        this.name = name;
    }
    public int getAge() {
        return age;
    }
    public String getName() {
        return name;
    }
}
