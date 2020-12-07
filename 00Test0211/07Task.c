#include <stdio.h>
void main()
{
    int num, i = 0, x = 0;
    while (1)
    {
        printf("print your mark: ");
        scanf("%d", &num);
        i += num;
        
        if (num == 0) break; 
        x++;
    }
    printf("Mark is %d\n", i/x);
   
    
}