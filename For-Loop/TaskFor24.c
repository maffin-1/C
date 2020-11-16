#include <stdio.h>
#include <stdlib.h>
void main()
{
    int x, i;
    int f = -15, t = 25;
    for (i = 0; i < 100; i++)
    {
        x = (rand() % (abs(f) + t + 1)) + f ;
        if (x % 2 != 0) printf("%2d %4d\n", i, x);
    }
}