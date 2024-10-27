// 7 WAP to Remove the characters of odd index values in a string.

#include <stdio.h>
#include <string.h>
void removeOddIndices(char[]);
void main()
{
    char str[100];

    printf("Enter  a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline char from fgets
    str[strcspn(str, "\n")] = '\0';

    removeOddIndices(str);

    printf("Modofied String: %s\n", str);
}
void removeOddIndices(char str[])
{
    int length = strlen(str);
    char result[100];
    int k = 0;

    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            result[k++] = str[i];
        }
    }
    result[k]= '\0';
    strcpy(str, result);
}