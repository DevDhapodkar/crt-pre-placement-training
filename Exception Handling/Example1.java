
public class Example1 {
    public static void main(String[] args) {
        try {
    int a = 10;
    int b = 0;
    int c = a/b;

    System.out.println("Result: " + c);
    System.out.println("End of the program");
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
        finally {
            System.out.println("This block will always execute");
        }
    
    }
    
}
