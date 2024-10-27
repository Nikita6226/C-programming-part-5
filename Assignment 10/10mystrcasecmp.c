#include <stdio.h>
int mystrcasecmp(char[], char[]);
char to_lower(char ch);
void main()
{
    char *str1 = "Hello, World!";
    char *str2 = "hello, world!";

    // Case-insensitive comparison
    int result = mystrcasecmp(str1, str2);

    if (result == 0)
    {
        printf("Strings are equal (case-insensitive).\n");
    }
    else if (result < 0)
    {
        printf("String 1 is less than String 2 (case-insensitive).\n");
    }
    else
    {
        printf("String 1 is greater than String 2 (case-insensitive).\n");
    }
}
int mystrcasecmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        char c1 = to_lower(str1[i]);
        char c2 = to_lower(str2[i]);

        if (c1 != c2)
        {
            return c1 - c2;
        }
        i++;
    }
}
char to_lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + ('a' - 'A'); // Convert uppercase to lowercase
    }
    return ch;
}