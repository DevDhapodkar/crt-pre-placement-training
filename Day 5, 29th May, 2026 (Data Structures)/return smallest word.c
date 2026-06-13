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

}}}}
