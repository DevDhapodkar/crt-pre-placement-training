public class arrayex1 {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        int greatest = Integer.MIN_VALUE;
        int secondGreatest = Integer.MIN_VALUE;

        for (int value : arr) {
            if (value > greatest) {
                secondGreatest = greatest;
                greatest = value;
            } else if (value > secondGreatest && value != greatest) {
                secondGreatest = value;
            }
        }

        System.out.println("Greatest element: " + greatest);
        System.out.println("Second greatest element: " + secondGreatest);
    }
}
