#include <stdio.h>
#include <ctype.h>  // For tolower

int mystrncasecmp(const char *s1, const char *s2, size_t n);

int main() {
    const char *s1 = "Hello, World!";
    const char *s2 = "hello, world!";
    size_t n = 5;

    // Compare the first 5 characters of s1 and s2, ignoring case
    int result = mystrncasecmp(s1, s2, n);

    if (result == 0) {
        printf("The first %zu characters of both strings are equal (case-insensitive).\n", n);
    } else if (result < 0) {
        printf("The first %zu characters of s1 are less than those of s2 (case-insensitive).\n", n);
    } else {
        printf("The first %zu characters of s1 are greater than those of s2 (case-insensitive).\n", n);
    }

    return 0;
}

// Custom implementation of strncasecmp
int mystrncasecmp(const char *s1, const char *s2, size_t n) {
    while (n > 0 && *s1 && *s2) {
        int c1 = tolower((unsigned char)*s1);
        int c2 = tolower((unsigned char)*s2);

        if (c1 != c2) {
            return c1 - c2;
        }

        s1++;
        s2++;
        n--;
    }

    // If reached end of one string or comparison length
    if (n == 0) {
        return 0;
    }

    // If one string is shorter
    if (*s1) {
        return tolower((unsigned char)*s1);
    }

    if (*s2) {
        return -tolower((unsigned char)*s2);
    }

    return 0;
}
