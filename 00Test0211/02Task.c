#include <stdio.h>
void main () 
{
    int num = 2;
    while (num <= 24)
    {
        if(num % 2 == 0)
            printf("%2d ", num);
        num++;
    
    }
    printf("\n");
}