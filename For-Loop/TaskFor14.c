#include <stdio.h>
void main()
{
    int x = 0, i;
    for (i = 7; i > 0; i--)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if (x >= 1) printf("Number: \n", x);
    }
    printf("\n");
}