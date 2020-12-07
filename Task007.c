#include <stdio.h>
void main() 
{
    int date, dd, mm, year;
    printf("Print date as a string(ddmmyyyy): ");
    scanf("%2d%2d%4d", &dd, &mm, &year);
    printf("The year is %4d, %2d month and the day is %2d\n", year, mm, dd);
}