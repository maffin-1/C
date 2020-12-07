#include <stdio.h>
void main ()
{
    int x, i = 0;
    while (x != 12)
    {
        printf("Print a number: ");
        scanf("%d", &x);
        if (x == 10) i++;
    }
    printf("You type %d times number 10\n", i);
}