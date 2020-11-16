#include <stdio.h>
#include <math.h>
void main()
{
    int i;
    int x, y;
    for (i = 6; i > 0; i--)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        y = pow(x,2);
        printf("%d\n", y );
    }
}
