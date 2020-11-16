#include <stdio.h>
#include <limits.h>
void main()
{
    int min = INT_MAX, i, x;
    for (i = 6; i > 0; i--)
    {
        printf("Print a Number: ");
        scanf("%d", &x);
        if (x < min) min = x;
    }
    printf("Max number is %d\n", min);
}