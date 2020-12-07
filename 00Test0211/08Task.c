#include <stdio.h>
void main()
{
    int num, x, y, z;
    
    while(1)
    {
        printf("Print 3 dig number: ");
        scanf("%d", &num);
        if (num < 100 || num > 999) break;
        
        x = num / 100;
        y = (num / 10) %10;
        z = num % 10;
        if (x == y && x == z && y == z) 
        printf("Number is correct: %d\n", num);
        else break;
        
    }    
        
    
    printf("\n");
    
}