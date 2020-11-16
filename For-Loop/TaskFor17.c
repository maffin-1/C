#include <stdio.h>
void main()
{
    int x, i;
    for (i = 7; i > 0; i--)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x % 3 == 0 && x % 5 == 0 ) printf("%d\n", x);
    }
}