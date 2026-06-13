#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    int left = 0;
    int right = strlen(str) - 1;
    int isPalindrome = 1; // Assume it's a palindrome until proven otherwise

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}