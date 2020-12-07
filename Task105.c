#include <stdio.h>
void main()
{
    int x = 1, y = 0;
    while(1)
    {   
        printf("Enter a number: ");
        scanf("%d", &x);
        if(x == -1) break;
        else{
            y = (y * 10) + x;
            printf("%d\n", y);
        }
    }

}
