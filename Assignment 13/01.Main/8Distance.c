//Distance(feet, inch)

struct Distance
{
    double feet;
    double inch;
};
#include<stdio.h>
void main()
{
    struct  Distance d1;
    struct  Distance d2;
    
    printf("\nEnter Distance in Feet 1: ");
    scanf("%lf",&d1.feet);

    printf("Enter Distance in inch 1: ");
    scanf("%lf",&d1.inch);

    //distance 2
    printf("\n\nEnter Distance in Feet 2: ");
    scanf("%lf",&d2.feet);

    printf("Enter Distance in inch 2: ");
    scanf("%lf",&d2.inch);

    printf("\n\nDistance in feet1: %.2lf",d1.feet);
    printf("\nDistance in inch1: %.2lf",d1.inch);

    printf("\n\nDistance in feet2: %.2lf",d2.feet);
    printf("\nDistance in inch1: %.2lf",d2.inch);

}