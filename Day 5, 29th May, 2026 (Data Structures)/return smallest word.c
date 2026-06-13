#include <stdio.h>
#include <string.h>
int smallestWord(const char *str, char *smallest) {
    char currentWord[100] = "";
    int minLength = 100; // Initialize to a large value
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            currentWord[j++] = str[i];
        } else {
            currentWord[j] = '\0';

            if (strlen(currentWord) < minLength && strlen(currentWord) > 0) {
                minLength = strlen(currentWord);
                strcpy(smallest, currentWord);
            }

            j = 0;
        }
    }

    currentWord[j] = '\0';

    if (strlen(currentWord) < minLength && strlen(currentWord) > 0) {
        minLength = strlen(currentWord);
        strcpy(smallest, currentWord);
    }

    return minLength;
}
int main() {
    char str[100];
    char smallest[100] = "";
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = smallestWord(str, smallest);
    if (length > 0) {
        printf("The smallest word in the string is: %s\n", smallest);
    } else {
        printf("No words found in the string.\n");
    }
    return 0;
}