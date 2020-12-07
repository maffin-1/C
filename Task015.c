#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));
    int range = 0, x = 0;
    int counter = 0;
    printf("Enter a range number: ");
    scanf("%d", &range);
   do
    {
        x = (rand() % abs(2*range)) - abs(range);
        printf("%3d\n", x);
        counter++;
    }while (abs(x) < abs(range) && counter < 15);
}