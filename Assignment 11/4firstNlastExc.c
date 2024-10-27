//4 WAP to Form the a new character and the first and last character have been exchanged.

#include<stdio.h>
#include<string.h>
void exchangeFirstAndLast(char str[]);
void main()
{
    char str[100];

    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);

    //remove newline character from fgets
    str[strcspn(str, "\n")]='\n';

    exchangeFirstAndLast(str);
    printf("Modified string: %s\n", str);
}
void exchangeFirstAndLast(char str[])
{
    int length= strlen(str);
    if(length>1)
    {
        char temp= str[0];
        str[0]= str[length-1];
        str[length-1]= temp;
    }
}