#include <stdio.h>
void main()
{
    int num;
    while (1)
    {
        printf("Enter a Number: ");
        scanf("%d", &num);
        if(num > 10 && num <99 && num/2 != 0 && num%3==0)
        {
            printf("number is %d\n", num);
        }
        if(num == 1) break;

    }
    printf("\n");
    
}