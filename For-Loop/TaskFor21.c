#include <stdio.h>
void main()
{
    int i;
    for (i = 99; i >= 10; i-=2)
    {
        if(i % 3 == 0) printf("%d\n", i);
    }
}