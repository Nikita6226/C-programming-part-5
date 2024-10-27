#include <stdio.h>
#include<string.h>
void mystrrev(char []);

void main() {
    char str[50] = "!!litaP atikiN";

    // Reverse the string
    mystrrev(str);

    // Print the reversed string
    printf("Reversed String: %s\n", str);
}

void mystrrev(char *str) {
    int length = strlen(str);
    int i;
    char temp;
    
    // Reverse the string
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}