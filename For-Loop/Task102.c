#include <stdio.h>
void main()
{
    unsigned long long num = 0, x, y = 0;
    printf("Print a number: ");
    scanf("%llu", &x);
    while (x != 0)
    {
        y = x % 10;
        printf("%llu\n", y);
        x = x / 10;
        printf("%llu\n", x);
        if (y > num)num = y;
        printf("%llu\n", num);
    }
    printf("Number is %llu\n", num);
}