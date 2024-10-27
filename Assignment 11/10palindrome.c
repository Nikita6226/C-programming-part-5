//10 WAP to check the string is pallindronme or not.
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = 0;
    
    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Check characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;  // Not a palindrome
        }
    }
    
    return 1;  // Is a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
