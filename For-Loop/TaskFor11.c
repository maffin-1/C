#include <stdio.h>
#include <math.h>
void main()
{
    int i;
    double x, y;
    for (i = 6; i > 0; i--)
    {
        printf("Enter a number: ");
        scanf("%lf", &x);
        y = pow(x,2);
        printf("%lf\n", y );
    }
}