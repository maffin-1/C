#include <stdio.h>
void main()
{
    int num;
    printf("Entr a number: ");
    scanf("%d", &num);
    for(int i = num; i >= 2; i--)
    {
        printf("%d\n", i);
    }    
}