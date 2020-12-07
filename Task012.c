#include <stdio.h>
void main()
{
    int a;
    do 
    {
        printf("prinf a number: ");
        scanf("%d", &a);
        if (a <= 0) continue;
        printf("a number is %d\n", a);
    }
    while(a != 0);
}