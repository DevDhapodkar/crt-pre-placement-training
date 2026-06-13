public class stringq1 {
    public static void main(String[] args) {
        String str = "madam";
        int left = 0;
        int right = str.length() - 1;
        boolean isPalindrome = true;

        while (left < right) {
            if (str.charAt(left) != str.charAt(right)) {
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }

        System.out.println(isPalindrome ? "Palindrome" : "Not Palindrome");

        left = 0;
        right = str.length() - 1;
        boolean isPalindromeUsingEqualOperator = true;

        while (left < right) {
            if (str.charAt(left) == str.charAt(right)) {
                left++;
                right--;
            } else {
                isPalindromeUsingEqualOperator = false;
                break;
            }
        }

        System.out.println(isPalindromeUsingEqualOperator ? "Palindrome" : "Not Palindrome");
    }
}
