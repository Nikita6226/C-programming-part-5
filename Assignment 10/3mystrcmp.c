#include <stdio.h>
int mystrcmp(char[], char[]);

int main()
{
    char str1[] = "Hello";
    char str2[] = "Nikii!";

    int result = mystrcmp(str1, str2);

    if (result == 0)
        printf("The strings are equal.\n");
    else if (result > 0)
        printf("String 1 is greater than String 2.\n");
    else
        printf("String 1 is less than String 2.\n");

    return 0;
}
int mystrcmp(char *str1, char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}
