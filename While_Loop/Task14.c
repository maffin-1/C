#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void main () 
{
    int r = 0;
    srand(time(NULL));   

    do {
        r = rand() % 100;
        printf("%02d\n", r);
    } while ( r != 18 );
    
}