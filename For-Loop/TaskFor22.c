#include <stdio.h>
void main()
{
    int i;
    for (i = 98; i >= 10; i-=2)
    {
        if( ( i / 10 ) % 10 == ( i % 10 ) / 2 ) printf("%d\n", i);
    }
}