#include <stdio.h>
void main()
{
    int num;
    while(1)
    {
        printf("Enter a number 0-9: ");
        scanf("%d",&num);
        if(num >= 0 && num <=9) break;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int x = 0; x < 10; x++)
        {printf("%d", num);}
        printf("\n");
    }
}