#include <stdio.h>

size_t mystrspn(const char *str1, const char *str2) {
    const char *s1 = str1;
    
    while (*s1 != '\0') {
        const char *s2 = str2;
        int found = 0;
        
        while (*s2 != '\0') {
            if (*s1 == *s2) {
                found = 1;
                break;
            }
            s2++;
        }
        
        if (!found) {
            return s1 - str1; // Return the length of the initial segment
        }
        
        s1++;
    }
    
    return s1 - str1; // Return the total length if all characters matched
}

int main() {
    char str1[] = "abcde12345";
    char str2[] = "abcde";

    size_t length = mystrspn(str1, str2);

    printf("The length of the initial segment is: %zu\n", length);

    return 0;
}
