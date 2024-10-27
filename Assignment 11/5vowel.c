// WAP to count Number of vowels in a string.

#include <stdio.h>
int countVowels(char str[]);
void main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowelCount = countVowels(str);
    printf("Number of vowels: %d\n", vowelCount);
}

int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                count++;
            }
    }
    return count;
}
