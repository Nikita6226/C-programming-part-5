//Structure
//Student(roll/No, name, marks)

struct Student
{
    int rollNo;
    char name[20];
    int marks;
};

#include<stdio.h>
#include <string.h>
void main()
{
    struct  Student s1;
    struct  Student s2;
    struct  Student s3;
    
    s1.rollNo= 32;
    strcpy(s1.name ,"Nikita");
    s1.marks= 90;

    printf("Roll Number S1: %d", s1.rollNo);
    printf("\nName S1: %s", s1.name);
    printf("\nMarks S1: %d", s1.marks);

    printf("\nEnter roll no. for s2: ");
    scanf("%d",&s2.rollNo);

    printf("Enter name for s2: ");
    scanf("%s",s2.name);

    printf("Enter marks for s2: ");
    scanf("%d",&s2.marks);

    printf("Roll Number S2: %d", s2.rollNo);
    printf("\nName S2: %s", s2.name);
    printf("\nMarks S2: %d", s2.marks);
}
