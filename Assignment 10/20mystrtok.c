#include <stdio.h>
#include<string.h>

char *mystrtok(char *str, const char *delimiters) {
    static char *nextToken = NULL;  // Static pointer to track the next token
    if (str != NULL) {
        nextToken = str;  // Initialize nextToken if the input string is not NULL
    }
    
    if (nextToken == NULL) {
        return NULL;  // No more tokens to process
    }

    // Skip leading delimiters
    while (*nextToken != '\0' && strchr(delimiters, *nextToken) != NULL) {
        nextToken++;
    }

    if (*nextToken == '\0') {
        return NULL;  // No token found
    }

    char *tokenStart = nextToken;  // Start of the next token

    // Find the end of the token (i.e., first occurrence of a delimiter)
    while (*nextToken != '\0' && strchr(delimiters, *nextToken) == NULL) {
        nextToken++;
    }

    // If we reached a delimiter, terminate the token and move the nextToken pointer
    if (*nextToken != '\0') {
        *nextToken = '\0';  // Null-terminate the current token
        nextToken++;        // Move past the delimiter
    } else {
        nextToken = NULL;   // No more tokens
    }

    return tokenStart;
}

int main() {
    char str[] = "Hello, world! This is C programming.";
    char delimiters[] = " ,!.";  // Delimiters: space, comma, exclamation mark, and period

    // First call to mystrtok
    char *token = mystrtok(str, delimiters);

    // Continue extracting tokens until mystrtok returns NULL
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = mystrtok(NULL, delimiters);  // Next call with NULL to continue tokenizing
    }

    return 0;
}
