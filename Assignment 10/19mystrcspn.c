#include <stdio.h>

size_t mystrcspn(const char *str1, const char *str2) {
    const char *s1 = str1;

    while (*s1 != '\0') {
        const char *s2 = str2;
        
        while (*s2 != '\0') {
            if (*s1 == *s2) {
                return s1 - str1; // Return the length before the first match
            }
            s2++;
        }
        s1++;
    }

    return s1 - str1; // Return the total length if no match is found
}

int main() {
    char str1[] = "abcde12345";
    char str2[] = "123";

    size_t length = mystrcspn(str1, str2);

    printf("The length of the initial segment without any '123' is: %zu\n", length);

    return 0;
}
