#include <stdio.h>
void main()
{
    int x;
    printf("Print number of the day of the week: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        break;
    }
    printf("\n");
}