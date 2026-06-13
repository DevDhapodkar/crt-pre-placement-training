public class Example2 {
    public static void main(String[] args) {
        try {
            String str = null;
            int len = str.length();
            System.out.println("Length of the string: " + len);
            System.out.println("End");
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        } finally {
            System.out.println("This block will always execute");
        }
    }
}
