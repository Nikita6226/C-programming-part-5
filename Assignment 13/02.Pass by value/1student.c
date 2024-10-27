 //./1student.exe

#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo; 
    char name[20];
    int marks;
};


int main()
{
    struct Student s1;

    // Initialize values for s1
    s1.rollNo = 32;
    strcpy(s1.name, "Nikita");
    s1.marks = 90;

    displayStudent(s1);  // Pass by value

    // Check the values after the function call
    printf("\nFunction call:\n");
    printf("Marks of s1: %d\n", s1.marks);  
	// Original value remains unchanged

    return 0;
}


// Function that takes a Student as a parameter (pass by value)
void displayStudent(struct Student s)
{
    printf("\nRoll Number: %d", s.rollNo);
    printf("\nName: %s", s.name);
    printf("\nMarks: %d\n", s.marks);
}
