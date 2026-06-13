package Inheretance;

public class SingleInheretanceMain {
    public static void main(String[] args) {
        B b1 = new B();
        b1.showB();
        b1.showA();
    }
}

class A {
    public void showA() {
        System.out.println("This is class A");
    }
}

class B extends A {
    public void showB() {
        System.out.println("This is class B");
    }
}
