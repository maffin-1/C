#include <stdio.h>
void main() {
    int x ;
    while (1)
    {
     printf("Enter a number: ");
     scanf("%d", &x);
     if (x < 100 || x > 999) continue;
     else break;
        
    }
    printf("Number is %d\n", x);
    
}