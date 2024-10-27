#include <stdio.h>

char *mystrpbrk(const char *str1, const char *str2) {
    while (*str1 != '\0') {
        const char *temp = str2;
        while (*temp != '\0') {
            if (*str1 == *temp) {
                return (char *)str1;  // Cast to char* as str1 is const
            }
            temp++;
        }
        str1++;
    }
    return NULL;
}

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "aeiou";

    char *result = mystrpbrk(str1, str2);

    if (result != NULL) {
        printf("First vowel in '%s' is '%c'\n", str1, *result);
    } else {
        printf("No vowels found in '%s'\n", str1);
    }

    return 0;
}
