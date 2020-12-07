#include <stdio.h>
void main ()
{
    int i = 10;
    while (1)
    {
        printf("%2d", i);
        i --;
        if (i == 1) break;
    }
   
    printf("\n");


}