#include <stdio.h>
int mystrcat(char[], char[]);

int main()
{
    char str1[50] = "Nikita "; // Make sure the array is large enough to hold the result
    char str2[] = "Patil!";

    // Concatenate str2 to str1
    mystrcat(str1, str2);

    // Print the result
    printf("Concatenated String: %s\n", str1);

    return 0;
}
int mystrcat(char *str1, char *str2)
{
    int i=0, j=0;
    // Find the end of str1
    while (str1[i] != '\0')
    {
        i++;
    }

    // Append str2 to str1
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Null terminate the result
    str1[i] = '\0';
}