#include <stdio.h>
int mystrncmp(const char *str1, const char *str2, int n);
int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, Everyone!";

    // Compare the first 5 characters of str1 and str2 using mystrncmp
    int result = mystrncmp(str1, str2, 5);

    if (result == 0) {
        printf("The first 5 characters of both strings are equal.\n");
    } else if (result < 0) {
        printf("The first 5 characters of str1 are less than str2.\n");
    } else {
        printf("The first 5 characters of str1 are greater than str2.\n");
    }

    return 0;
}
// Custom strncmp function
int mystrncmp(const char *str1, const char *str2, int n) {
    while (n--) {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        if (*str1 == '\0' || *str2 == '\0') {
            break;
        }
        str1++;
        str2++;
    }
    return 0;
}


