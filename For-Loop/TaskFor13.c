#include <stdio.h>
void main()
{
    unsigned int i,x = 0,y = 1, z;
    printf("%d\n",x);
    for (i = 0; i <= 125; i++)
    {
        z = x + y;
        x = y;
        y = z;
        printf("%4d %d\n", i, y);
        
    }
}