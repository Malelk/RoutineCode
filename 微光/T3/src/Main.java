public class Main {
    public static void main(String[]args) throws CloneNotSupportedException {
        Teacher teacher = new Teacher("G", 30);
        Student glimmer = new Student("glimmer", 18, teacher);
        Student glimmerClone = (Student) glimmer.clone();
        glimmerClone.setName("glimmerClone");
        glimmerClone.getTeacher().setName("GClone");
        glimmerClone.setAge(99);
        //�Ƚ�����teacher��ַ
        System.out.println(glimmer.getTeacher());
        System.out.println(glimmerClone.getTeacher()); 
        System.out.println("����glimmer���ҵ�����Ϊ " + glimmer.getName() + " �ҽ���" + glimmer.getAge() + "�� �ҵ���ʦ������Ϊ " + glimmer.getTeacher().getName());
        System.out.println("���ǿ�¡�壬�ҵ�����Ϊ " + glimmerClone.getName() + " �ҽ���" + glimmerClone.getAge() + "�� �ҵ���ʦ������Ϊ " + glimmerClone.getTeacher().getName());
    }  
}
