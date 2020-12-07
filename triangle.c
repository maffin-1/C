#include <stdio.h>
void main()
{
    int i, j, base;
    printf("Enter a triangle basis: ");
    scanf("%d", &base);
    for (i = 1; i <= base; i++)
    {
        for(j = 1; j <= base-i; j++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

}