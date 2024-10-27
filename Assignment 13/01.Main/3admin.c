//Admin(id, name, salary, allowance)


struct Admin
{
    int id;
    char name[20];
    double salary; 
    double allowance;
};

#include<stdio.h>
void main()
{
    struct  Admin ad1;
    struct  Admin ad2;
    
    printf("Enter id for admin1: ");
    scanf("%d",&ad1.id);

    printf("Enter name for admin1: ");
    scanf("%s",ad1.name);

    printf("Enter salary for admin1: ");
    scanf("%lf",&ad1.salary);

    printf("Enter allowance for admin1: ");
    scanf("%lf", &ad1.allowance);

    printf("\nadmin1 ID: %d",ad1.id);
    printf("\nadmin1 name:%s ",ad1.name);
    printf("\nadmin1 salary: %.2lf",ad1.salary);

    //for emp 2
    printf("\n\nEnter id for admin2: ");
    scanf("%d",&ad2.id);

    printf("Enter name for admin2: ");
    scanf("%s",ad2.name);

    printf("Enter salary for admin2: ");
    scanf("%lf",&ad2.salary);

    printf("Enter allowance for admin2: ");
    scanf("%lf", &ad2.allowance);

    printf("\nadmin2 ID: %d",ad2.id);
    printf("\nadmin2 name:%s ",ad2.name);
    printf("\nadmin2 salary: %.2lf",ad2.salary);
}
