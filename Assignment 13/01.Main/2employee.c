//Employee(id, name, salary)

struct Employee
{
    int id;
    char name[20];
    double salary; 
};

#include<stdio.h>
void main()
{
    struct  Employee emp1;
    struct  Employee emp2;
    
    printf("Enter id for emp1: ");
    scanf("%d",&emp1.id);

    printf("Enter name for emp1: ");
    scanf("%s",emp1.name);

    printf("Enter salary for emp1: ");
    scanf("%lf",&emp1.salary);

    printf("\nEmp1 ID: %d",emp1.id);
    printf("\nEmp1 name:%s ",emp1.name);
    printf("\nEmp1 salary: %.2lf",emp1.salary);

    //for emp 2
    printf("\n\nEnter id for emp2: ");
    scanf("%d",&emp2.id);

    printf("Enter name for emp2: ");
    scanf("%s",emp2.name);

    printf("Enter salary for emp2: ");
    scanf("%lf",&emp2.salary);

    printf("\nEmp2 ID: %d",emp2.id);
    printf("\nEmp2 name:%s ",emp2.name);
    printf("\nEmp2 salary: %.2lf",emp2.salary);
}
