#include <stdio.h>
void main()
{
    int num;
    printf("Entr a number: ");
    scanf("%d", &num);
    for(int i = 2; i <= num; i+=2)
    {
        printf("%d\n", i);
    }    
}