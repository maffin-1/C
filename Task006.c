#include <stdio.h>
void main() {
    int x;
    while (1) 
    {
        printf("Print a Number(print 0 to end the game): ");
        scanf("%d", &x);
        if ( x == 0) break;
        if(x % 7 == 0) printf("boom\n");
        else continue;
    }
    printf("thank you for the game, you are great!\n");
}