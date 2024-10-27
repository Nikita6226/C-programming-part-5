//HR(id, name, salary, commission)

struct HR
{
    int id;
    char name[20];
    double salary; 
    double commission;
};

#include<stdio.h>
void main()
{
    struct  HR hr1;
    struct  HR hr2;
    
    printf("Enter id for HR1: ");
    scanf("%d",&hr1.id);

    printf("Enter name for HR1: ");
    scanf("%s",hr1.name);

    printf("Enter salary for HR1: ");
    scanf("%lf",&hr1.salary);

    printf("Enter commission for HR1: ");
    scanf("%lf", &hr1.commission);

    printf("\nHR1 ID: %d",hr1.id);
    printf("\nHR1 name:%s ",hr1.name);
    printf("\nHR1 salary: %.2lf",hr1.salary);
    printf("\nHR2 commission: %.2lf",hr1.commission);    

    //for emp 2
    printf("\n\nEnter id for HR2: ");
    scanf("%d",&hr2.id);

    printf("Enter name for HR2: ");
    scanf("%s",hr2.name);

    printf("Enter salary for HR2: ");
    scanf("%lf",&hr2.salary);

    printf("Enter commission for HR2: ");
    scanf("%lf", &hr2.commission);

    printf("\nHR2 ID: %d",hr2.id);
    printf("\nHR2 name:%s ",hr2.name);
    printf("\nHR2 salary: %.2lf",hr2.salary);
    printf("\nHR2 commission: %.2lf",hr2.commission);
}
