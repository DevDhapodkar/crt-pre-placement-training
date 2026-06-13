package polymorphism1;

public class B extends A {
    public void show() {

        super.show(); // Calls the show method of class A
        System.out.println("This is class B show method");
    }
}
