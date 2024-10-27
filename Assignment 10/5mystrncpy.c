#include <stdio.h>
void mystrncpy(char[] , char[],int );
void  main() {
    char source[] = "Hello, World!";
    char destination[20];  

    // Copy first 5 characters from source to destination
    mystrncpy(destination, source, 5);

    // Manually null-terminate the string in case strncpy doesn't add it
    destination[5] = '\0';

    // Print both strings
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

}
void mystrncpy(char* destination, char* source,int size)
{
    for (int i = 0; i < size; i++)
    {
        destination[i]=source[i];
    }
    
}