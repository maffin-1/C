#include <stdio.h>
void main()
{
    int num;
    printf("Entr a number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }    
}