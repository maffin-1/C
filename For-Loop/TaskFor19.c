#include <stdio.h>
void main()
{
    int x, i;
    for (i = 7; i > 0; i--)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x > 99 && x < 1000 && x % 10 == (x / 10)% 10) printf("%d\n", x);
    }
}