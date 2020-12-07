#include <stdio.h>
void main()
{
    int x = 0, sum = 0, i = 0;
    while (x != 101)
    {
        printf("Print a mark. 101 for exit: ");
        scanf("%d", &x);
        if (x >= 70 && x <= 100) 
        {
            sum+= x;
            i++;
        }
    }
    printf("Average mark is %d\n", sum/i);
}