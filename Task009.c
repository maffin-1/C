#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x, sum = 0;
    printf("Print a number: ");
    scanf("%d", &x);
    x = abs(x);
    while (x > 0)
    {
        sum += x % 10;
        x = x / 10;
    }
    printf("Sum = %d\n", sum);
}
