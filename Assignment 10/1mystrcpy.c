// mystrcpy.

#include <stdio.h>
void mystrcpy(char *, char *);
void main()
{
    char arr[5] = "abc";
    char brr[5];

    mystrcpy(brr, arr);
    {
        printf("%s", arr);
        printf("%s", brr);
    }
}
void mystrcpy(char *brr, char *arr)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        brr[i] = arr[i];
        i++;
    }
    brr[i] = arr[i]; // to copy '\0'
}