#include <stdio.h>
void main()
{
    int a = 1;
    while(a != 0)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        if (a <= 0) continue;
        printf("%d\n", a);
    }
}