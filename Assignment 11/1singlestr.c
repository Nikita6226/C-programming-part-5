//1. write a program to scan string from user then scan a single character and search it in a accepted string. 

#include <stdio.h>

void main() {
    char str[100], ch;
    int i, found = 0;

    // Input string from user
    printf("Enter a string: ");
    scanf("%99s", str);  // Limits input to avoid overflow

    fflush(stdin);  // use this insted space before %c to avoid newline issue
    // Input character to search
    printf("Enter a character to search: ");
    scanf("%c", &ch);   

    // Search for the character in the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            found = 1;
            break;
        }
    }

    // Display the result
    if (found)
        printf("Character '%c' found at position %d.\n", ch, i + 1);
    else
        printf("Character '%c' not found.\n", ch);
}
