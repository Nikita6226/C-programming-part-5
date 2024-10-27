#include <stdio.h>

void mystrupper(char str[]);

void main()
{
    char str[] = "Nikita Patil!";

    // Convert the string to uppercase
    mystrupper(str);

    // Print the result
    printf("Uppercase String: %s\n", str);

}

void mystrupper(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        // If the character is a lowercase letter, convert it to uppercase
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }
}