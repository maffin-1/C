#include <stdio.h>
void main ()
{
    int x = 1, i = 0;
    while (x != 0)
    {
        printf("Print a number: ");
        scanf("%d", &x);
        if (x % 3 == 0 && x!= 0) i++;
    }
    printf("%d numbers that devide by 3.\n", i);
}