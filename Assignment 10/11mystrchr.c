#include <stdio.h>
#include <string.h>
char* mystrchr(char[], char);
void main()
{
    char str[] = "Hello, World!";
    char ch = 'W';

    // Find the first occurrence of 'W' in the string
    char *result = mystrchr(str, ch);

    if (result != NULL)
    {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", ch);
    }
}
char* mystrchr(char str[], char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return (char *)(str + i);
        }
        i++;
    }
}