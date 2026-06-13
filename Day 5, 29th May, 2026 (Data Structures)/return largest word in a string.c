#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    char largestWord[100] = "";
    char currentWord[100] = "";

    int maxLength = 0;
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            currentWord[j++] = str[i];
        } else {
            currentWord[j] = '\0';

            if (strlen(currentWord) > maxLength) {
                maxLength = strlen(currentWord);
                strcpy(largestWord, currentWord);
            }

            j = 0;
        }
    }

    currentWord[j] = '\0';

    if (strlen(currentWord) > maxLength) {
        maxLength = strlen(currentWord);
        strcpy(largestWord, currentWord);
    }

    printf("The largest word in the string is: %s\n", largestWord);

    return 0;
}