#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mystrdup(const char *str) {
    // Find the length of the input string
    size_t length = strlen(str);
    
    // Allocate memory for the new string (including space for the null terminator)
    char *duplicate = (char *)malloc(length + 1);
    
    if (duplicate == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }
    
    // Copy the string into the newly allocated memory
    strcpy(duplicate, str);
    
    return duplicate;  // Return the pointer to the new string
}

int main() {
    char str[] = "Hello, World!";
    
    // Use custom mystrdup to duplicate the string
    char *duplicate = mystrdup(str);
    
    if (duplicate != NULL) {
        printf("Original: %s\n", str);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate);  // Free the dynamically allocated memory
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
