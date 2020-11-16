#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));
    int x, i, num = 9;
    for (i = 0; i < 50; i++)
    {
        x = (rand() %20 +10 );
        if ( x > num )
        {
            num = x; 
            printf("%2d %4d\n", i, x);
        }
    }
}