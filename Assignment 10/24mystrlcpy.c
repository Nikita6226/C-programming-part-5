#include <stdio.h>

size_t mystrlcpy(char *dst, const char *src, size_t dstsize) {
    size_t i;

    // Copy up to dstsize - 1 characters from src to dst
    for (i = 0; i < dstsize - 1 && src[i] != '\0'; i++) {
        dst[i] = src[i];
    }

    // Null-terminate the destination string
    if (dstsize > 0) {
        dst[i] = '\0';
    }

    // Return the total length of the source string
    while (src[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
    char dest[10];
    char src[] = "Hello, World!";
    
    size_t result = mystrlcpy(dest, src, sizeof(dest));
    
    printf("Destination string: %s\n", dest);    // Output: "Hello, Wo"
    printf("Total length: %zu\n", result);       // Output: 13
    
    return 0;
}
