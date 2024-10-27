#include <stdio.h>

void mystrncat(char *dest, const char *src, size_t n) {
    // Move to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }
    
    // Copy characters from src to dest, up to n characters
    while (n-- && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    
    // Null-terminate the destination string
    *dest = '\0';
}

int main() {
    char dest[100] = "Hello, ";
    char src[] = "World!";
    
    mystrncat(dest, src, 3); // Concatenates only first 3 characters of src
    
    printf("Resulting string: %s\n", dest);
    return 0;
}
