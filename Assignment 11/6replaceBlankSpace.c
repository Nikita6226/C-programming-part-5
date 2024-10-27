//6WAP to Take a string and replace every blank space with special symbol. 

#include<stdio.h>
#include<string.h>
void replaceSpace(char* ,char);
void main()
{
    char str[100];
    char symbol;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    //Remove newline char from fgets
    str[strcspn(str, "\n")]= '\0';

    printf("Enter the special symbol to replace spaces: ");
    scanf("%c",&symbol);

    replaceSpace(str, symbol);

    printf("Modified string: %s\n", str);
}
void replaceSpace(char str[],char symbol)
{
    for (int i = 0;str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        {
            str[i]=symbol;
        }
    }
    
}