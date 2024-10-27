// Date(date, month, year)

struct Date
{
    int date;
    char month[20];
    int year;
};

#include <stdio.h>
#include <string.h>
void main()
{
    struct Date d1;
    struct Date d2;
    struct Date d3;

    d1.date = 20;
    strcpy(d1.month, "Jan");
    d1.year = 2024;

    printf("Date D1: %d", d1.date);
    printf("\nMonth 1: %s", d1.month);
    printf("\nYear 1: %d", d1.year);

    printf("\n\nEnter Date D1: ");
    scanf("%d", &d2.date);

    printf("Enter Month 2: ");
    scanf("%s", d2.month);

    printf("Enter Year 2: ");
    scanf("%d", &d2.year);

    printf("\nDate D2: %d", d2.date);
    printf("\nMonth 2: %s", d2.month);
    printf("\nYear 2: %d", d2.year);
}
