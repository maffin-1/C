#include <stdio.h>
#include <math.h>
void main ()
{
    int i, x;
    while (x != 18)
    {
        x = rand()%100 ;
        printf("%02d\n", x);
    }
}