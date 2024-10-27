//Time(hour, min, sec)

struct Time
{
    int hour;
    int min;
    int sec;
};

#include <stdio.h>
#include <string.h>
void main()
{
    struct Time t1;
    struct Time t2;
    struct Time t3;

    printf("Enter Hour for Time 1 : ");
    scanf("%d",&t1.hour);

    printf("Enter minute for Time 1 : ");
    scanf("%d",&t1.min);

    printf("Enter second for Time 1 : ");
    scanf("%d",&t1.sec);

    printf("\n\nEnter Hour 2: ");
    scanf("%d", &t2.hour);

    printf("Enter minute 2: ");
    scanf("%d", &t2.min);

    printf("Enter second 2: ");
    scanf("%d", &t2.sec);

    printf("\n\nEnter Hour for Time 1 : %d", t1.hour);
    printf("\nEnter minute for Time 1 : %d", t1.min);
    printf("\nEnter second for Time 1 : %d", t1.sec);

    printf("\n\nEnter Hour for Time 2 : %d", t2.hour);
    printf("\nEnter minute for Time 2 : %d", t2.min);
    printf("\nEnter second for Time 2 : %d", t2.sec);
}
