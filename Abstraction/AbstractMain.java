package Abstraction;
// You cannot create obj of an abstract class but you can create reference variable of an abstract class
public class AbstractMain {
    public static void main(String[] args) {
//dynamic method dispatch    
        Animal a1; 
        a1 = new Tiger();
        a1.eat();
//dynamic method dispatch
        Goat g1 = new Goat();
        g1.eat();

        
            
        };
    
}
