#include <stdio.h>
void main()
{
    int num;
    while (1)
    {
        printf("print your mark: ");
        scanf("%d", &num);
        if (num >= 80) printf("Mark is good, %d\n", num);
        if (num == -1) break; 
    }
    printf("\n");
    
}