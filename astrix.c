#include <stdio.h>
void main ()
{
    int x, i = 0;
    printf("Print your number");
    scanf("%d", &x);
    while (1)
    {
        printf("*");
        i++;
        if (x == i) break;

    }
    printf("\n");
}