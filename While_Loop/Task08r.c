#include <stdio.h>
void main ()
{
    int big = 0, small = 0, x;
    while (x !=0)
    {
        printf("Print a number: ");
        scanf("%d", &x);
        if (x > 0) big++;
        else if (x < 0) small++;
    }
    printf("Bigger than 0: %d\nSmaller than 0: %d\n", big, small);
    
}