#include <stdio.h>
#include <math.h>
void main()
{
    double x = 1.0, num;
    while (x != 0)
    {
        printf("Enter a number: ");
        scanf("%lf", &x);
        if (x <= 0) continue;
        num = sqrt(x);
        printf("number: %lf\nshoresh: %lf\n", x, num);
    }
}