#include <stdio.h>

void mystrlow(char str[]);

int main()
{
    char str[] = "NIKITA PATIL!";

    // Convert the string to lowercase
    mystrlow(str);

    // Print the result
    printf("Lowercase String: %s\n", str);

    return 0;
}

void mystrlow(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 'a'- 'A' ;            
        }
        i++;
    }
}


/*This correctly converts uppercase letters ('A' to 'Z') to lowercase by adjusting their ASCII values. 
Subtracting 'A' (65) and adding 'a' (97) gives the correct lowercase letter.*/