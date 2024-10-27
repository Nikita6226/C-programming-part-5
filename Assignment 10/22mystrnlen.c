#include <stdio.h>

size_t mystrnlen(const char *str, size_t maxlen) {
    size_t length = 0;
    
    // Loop through the string, counting up to maxlen characters
    while (length < maxlen && str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[] = "Hello, World!";
    
    // Calculate the length with a maximum limit of 5 characters
    size_t length = mystrnlen(str, 5);
    
    printf("Length (with max 5 chars): %zu\n", length);  // Output: 5

    // Calculate the full length with a higher limit
    size_t full_length = mystrnlen(str, 50);
    
    printf("Full length: %zu\n", full_length);  // Output: 13

    return 0;
}
