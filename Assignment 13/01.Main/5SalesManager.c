//SalesManager(id, name, salary, incentive, target)

struct SalesManager
{
    int id;
    char name[20];
    double salary; 
    double incentive;
    double target;
};

#include<stdio.h>
void main()
{
    struct  SalesManager sm1;
    struct  SalesManager sm2;
    
    printf("Enter id for SalesManager1: ");
    scanf("%d",&sm1.id);

    printf("Enter name for SalesManager1: ");
    scanf("%s",sm1.name);

    printf("Enter salary for SalesManager1: ");
    scanf("%lf",&sm1.salary);

    printf("Enter incentive for SalesManager1: ");
    scanf("%lf", &sm1.incentive);

    printf("Enter target for SalesManager1: ");
    scanf("%lf", &sm1.target);

    printf("\nSalesManager1 ID: %d",sm1.id);
    printf("\nSalesManager1 name:%s ",sm1.name);
    printf("\nSalesManager1 salary: %.2lf",sm1.salary);
    printf("\nSalesManager1 incentive: %.2lf",sm1.incentive);
    printf("\nSalesManager1 target: %.2lf",sm1.target);

    //for emp 2
    printf("\n\nEnter id for SalesManager2: ");
    scanf("%d",&sm2.id);

    printf("Enter name for SalesManager2: ");
    scanf("%s",sm2.name);

    printf("Enter salary for SalesManager2: ");
    scanf("%lf",&sm2.salary);

    printf("Enter incentive for SalesManager2: ");
    scanf("%lf", &sm2.incentive);

    printf("Enter target for SalesManager1: ");
    scanf("%lf", &sm2.target);

    printf("\nSalesManager2 ID: %d",sm2.id);
    printf("\nSalesManager2 name:%s ",sm2.name);
    printf("\nSalesManager2 incentive: %.2lf",sm2.incentive);
    printf("\nSalesManager2 target: %.2lf",sm2.target);
}
