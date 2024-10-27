//Search for the occurence of character 'a' and replace it with '$'
#include <stdio.h>

void main() {
    char str[100];
    int i;

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);  // Input a string (use fgets if spaces are needed)

    // Search for the character 'a' and replace it with '$'
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = '$';  // Replace 'a' with '$'
        }
    }

    // Display the modified string
    printf("Modified string: %s\n", str);
}