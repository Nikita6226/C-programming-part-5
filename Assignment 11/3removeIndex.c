//3 WAP to remove nth index character from a Non-empty String.
#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int n, i, len;

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    // Input the index of the character to remove
    printf("Enter the index of the character to remove: ");
    scanf("%d", &n);

    len = strlen(str);  // Calculate length of the string

    // Validate the index
    if (n < 0 || n >= len) {
        printf("Invalid index! Please enter a valid index between 0 and %d.\n", len - 1);
        return;
    }

    // Remove the character at index n by shifting the characters
    for (i = n; i < len - 1; i++) {
        str[i] = str[i + 1];  // Shift characters to the left
    }
    str[len - 1] = '\0';  // Null-terminate the string

    // Display the modified string
    printf("Modified string: %s\n", str);
}
