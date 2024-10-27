////8 WAP to calculate the number of words present in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countWords(char str[]);
void main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int wordCount= countWords(str);
    printf("Number of Words :%d\n",wordCount);
}
int countWords(char str[])
{
    int count=0, inWord=0;

    for (int i = 0; str[i]!='\0'; i++)
    {
        if(isspace(str[i]))
        {
            inWord=0;
        }
        else if (inWord==0)
        {
            inWord=1;
            count++;
        }
        
    }
    return count;
}