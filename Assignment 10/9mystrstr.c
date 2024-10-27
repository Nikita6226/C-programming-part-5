// It is used to locate the first occurrence of a substring within a string.
#include <stdio.h>
char* mystrstr(char[], char[]);

void main()
{
    char str[] = "Hello, World!";
    char sub[] = "World";

    // Find the substring in the main string
    char *result = mystrstr(str, sub);

    if (result != NULL)
    {
        printf("Substring found at position: %ld\n", result - str);
        printf("Substring: %s\n", result);
    }
    else
    {
        printf("Substring not found\n");
    }
}
char* mystrstr(char str[], char sub[])
{
     int i, j;

    // Return NULL if the substring is empty
    if (*sub == '\0') return (char *)str;

    // Loop through each character in the main string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the substring starts at this position
        if (str[i] == sub[0]) {
            // Compare the substring
            for (j = 0; sub[j] != '\0' && str[i + j] == sub[j]; j++) {
                // Continue comparison
            }
            // If end of substring is reached, return the starting position
            if (sub[j] == '\0') {
                return (char *)(str + i);
            }
        }
    }

    // If the substring is not found, return NULL
    return NULL;
}