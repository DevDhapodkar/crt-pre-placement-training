public class Main {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.setStudent(101, "John", "Computer Science");
        System.out.println("Student Details:");
        s1.getStudent();

        Student s2 = new Student();
        s2.setStudent(102, "Alice", "Electrical Engineering");

        Student s3 = new Student();
        s3.setStudent(103, "Bob", "Mechanical Engineering");

        Student s4 = new Student();
        s4.setStudent(104, "Eve", "Civil Engineering");

        Student s5 = new Student();
        s5.setStudent(105, "Charlie", "Chemical Engineering");
        System.out.println("\nDetails of Student 2:");

}}
