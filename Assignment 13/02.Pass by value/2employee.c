//Employee(id, name, salary)
#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

// Function that takes an Employee as a parameter (pass by value)
void displayEmployee(struct Employee e)
{
    printf("\nID: %d", e.id);
    printf("\nName: %s", e.name);
    printf("\nSalary: %d\n", e.salary);
}

int main()
{
    struct Employee e1;

    // Initialize values for e1
    e1.id = 32;
    strcpy(e1.name, "Nikita");
    e1.salary = 50000;

    // Call displayEmployee and pass e1 by value
    displayEmployee(e1);

    // Check the values after the function call
    printf("\nAfter function call:\n");
    printf("Salary of e1: %d\n", e1.salary);  
	// Original value remains unchanged

    return 0;
}

