#include <stdio.h>

size_t mystrlcat(char *dst, const char *src, size_t dstsize) {
    size_t dst_len = 0;
    size_t src_len = 0;
    size_t i;

    // Calculate the length of dst
    while (dst_len < dstsize && dst[dst_len] != '\0') {
        dst_len++;
    }

    // Calculate the length of src
    while (src[src_len] != '\0') {
        src_len++;
    }

    // If there is no space in dst, return the total length of what we tried to create
    if (dst_len == dstsize) {
        return dst_len + src_len;
    }

    // Append src to dst while there's space in the buffer (leave space for null terminator)
    i = 0;
    while (src[i] != '\0' && (dst_len + i) < (dstsize - 1)) {
        dst[dst_len + i] = src[i];
        i++;
    }

    // Null-terminate the destination string
    dst[dst_len + i] = '\0';

    // Return the total length of the string that was attempted to be created
    return dst_len + src_len;
}

int main() {
    char dest[20] = "Hello, ";
    char src[] = "World!";
    
    size_t result = mystrlcat(dest, src, sizeof(dest));
    
    printf("Resulting string: %s\n", dest);      // Output: "Hello, World!"
    printf("Total length: %zu\n", result);       // Output: 13
    
    return 0;
}
