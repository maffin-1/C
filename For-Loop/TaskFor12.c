#include <stdio.h>
void main()
{
    int a;
    printf("Print a number: ");
    scanf("%d", &a);
    for (int i = a; i > 0; i--)
    printf("*");
    printf("\n");
}