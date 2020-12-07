#include <stdio.h>
void main ()
{
    int i, num = 0;
    for (int x = 0; x < 6; x++)
        {
            printf("Print a Number: ");
            scanf("%d", &i);
            num += i;
            
        }
    printf("Number is %d\n", num/6);
}