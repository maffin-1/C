#include <stdio.h>
void main()
{
    int a, b;
    printf("Print a number: ");
    scanf("%d", &a);
    printf("Print one more number: ");
    scanf("%d", &b);
    for (int i = a; i > 0; i--)
    {
        for (int x = b; x > 0; x--) 
        {
            printf("*");
        }
        printf("\n");
    }
}