#include <stdio.h>

int mystrlen(char*, int);
int main() {
    char str[20] = "Nikita Patil!!";
    
    // Calculate the length of the string
    int length = mystrlen(str,20);

    // Print the length
    printf("Length of the string: %d\n", length);

    return 0;
}
int mystrlen(char* ptr, int index)
{
    int i;
    while (ptr[i]!='\0')
    {
        index=i++;
    }
    return index+1;
}