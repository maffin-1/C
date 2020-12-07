#include <stdio.h>
void main()
{
    int x ;
    while(x != -1)
    {
        printf("Print your number. -1 for exit: ");
        scanf("%d", &x);
        if (x >= 80 && x <= 100) printf ("Mark is %d\n", x);
        else continue;
    }
}