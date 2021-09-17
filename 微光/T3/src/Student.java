class Student implements Cloneable {
    private String name;
    private int age;
    private Teacher teacher;

    @Override
    public Student clone() throws CloneNotSupportedException {
        Student student = (Student)super.clone();
        student.setTeacher((Teacher)this.teacher.clone());
        return student;
    }
    Student(String N,int A,Teacher T) {
        name = N;
        age = A;
        teacher = T;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void setTeacher(Teacher teacher) {
        this.teacher = teacher;
    }
    public int getAge() {
        return age;
    }
    public String getName() {
        return name;
    }
    public Teacher getTeacher() {
        return teacher;
    }

}