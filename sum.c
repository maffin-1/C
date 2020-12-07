#include <stdio.h>
void main ()
{
    int x, sum = 0, i= 0;
    while (1)
    {
        printf("print a number: ");
        scanf("%d", &x);
        if (x == -1) break;
        sum += x;
        i++;
        
    }
    printf("Average is %d\n", sum/i);
    
}