#include <stdio.h>
#include <string.h>

char *strnstr(const char *haystack, const char *needle, size_t len);

int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t len = 10;

    // Find the first occurrence of "World" within the first 10 characters of "Hello, World!"
    char *result = strnstr(haystack, needle, len);

    if (result) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found within the specified length.\n");
    }

    return 0;
}

// Custom implementation of strnstr
char *strnstr(const char *haystack, const char *needle, size_t len) {
    size_t needle_len = strlen(needle);

    // If needle is empty, return haystack
    if (needle_len == 0) {
        return (char *)haystack;
    }

    // Iterate through haystack up to len - needle_len
    for (size_t i = 0; i <= len - needle_len && haystack[i] != '\0'; i++) {
        // Compare substring of haystack with needle
        if (strncmp(&haystack[i], needle, needle_len) == 0) {
            return (char *)&haystack[i];
        }
    }

    // If no match is found, return NULL
    return NULL;
}
