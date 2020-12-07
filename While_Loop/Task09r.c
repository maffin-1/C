#include <stdio.h>
#include <limits.h>
void main()
{
    int max = INT_MIN, min = INT_MAX, z;
    while (z != 0)
    {
        printf("Print a number: ");
        scanf("%d", &z);
        if (z > max) max = z;
        else if (z < min && z != 0) min = z; 
    }
    if (max == INT_MIN || min == INT_MAX)
    {
        printf("NO DATA ENTERED!\n");
    }
    else {
    printf("Max %d\nMin %d\n", max, min);
    }
}