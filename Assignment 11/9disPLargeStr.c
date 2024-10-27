// 9 WAP to take in two string and  display the larger String without Using Built-in functions.

#include <stdio.h>
#include<string.h>
// Function to calculate the length of a string without using strlen
int stringLength(char str[]) {
    int length = 0;
    
    // Manually count the length of the string
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

// Function to display the larger string
void displayLargeString(char str1[], char str2[]) {
    int len1 = stringLength(str1);  // Manually calculate length of first string
    int len2 = stringLength(str2);  // Manually calculate length of second string

    if (len1 > len2) {
        printf("Larger string: %s\n", str1);
    } else if (len2 > len1) {
        printf("Larger string: %s\n", str2);
    } else {
        printf("Both strings are of equal length.\n");
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove newline from str1

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove newline from str2

    displayLargeString(str1, str2);  // Call function to display the larger string

    return 0;
}
