#include <stdio.h>
void main()
{
    int i;
    for (i = 100; i <= 999; i++)
    {
        if(i % 10 == (i / 10)% 10 && i % 2 == 0) printf("%d\n", i);
    }
}