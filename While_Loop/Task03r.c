#include <stdio.h>
void main()
{
    int x = 1, sum = 0, i = 0;
    while (x != 0)
    {
        printf("Print a mark. 0 for exit: ");
        scanf("%d", &x);
        sum+= x;
        i++;
        
    }
    printf("Average mark is %d\n", sum/i);
}
