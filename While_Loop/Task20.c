#include <stdio.h>
void main()
{
    int num = 0;
    while(1)
    {
        printf("Write a number: ");
        scanf("%d", &num);
        if(num > 1000000)break;
        else printf("num: %d\n", num);
    }
    printf("error\n");
}