#include <stdio.h>
char *mystrrchr(const char str[], char ch);
int main() {
    char str[] = "Hello, World!";

    // Find the last occurrence of 'o'
    char *result = mystrrchr(str, 'o');

    if (result) {
        printf("Last occurrence of 'o': %s\n", result);
    } else {
        printf("'o' not found in the string.\n");
    }

    return 0;
}
char *mystrrchr(const char str[], char ch) {
    char *last_occurrence = NULL;
    int i = 0;

    // Loop through the string
    while (str[i] != '\0') {
        if (str[i] == ch) {
            last_occurrence = (char *)(str + i);
        }
        i++;
    }

    // Return the pointer to the last occurrence or NULL
    return last_occurrence;
}