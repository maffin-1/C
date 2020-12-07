#include <stdio.h>
void main() {
    int x, sum = 0, i = 0;
    do
    {
        printf("Write your mark: ");
        scanf("%d",&x);
        if(x > 0 && x <= 100)
        {
            sum += x;
            i++;
        }
    }
    while (x != 0);
    printf("Average mark is %d\n", sum/i);
    
}
