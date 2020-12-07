#include <stdio.h>
#include <limits.h>
void main() {
    int num = INT_MIN, x, y;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &x);
        if (num < x) 
        {
            num = x;
        }
        if (y == x) break;
        y = x;
    }
    printf("The biggest number is %d\n", num);
    
}