#include <stdio.h>
void main() {
    int result, x = 0, i,num;
    for (i = 10 ; i > 0; i-- )
    {
        printf("print a number: ");
        result = scanf("%d", &num);
        if ( num % 2 ) {
            x++; 
        }
    }
    printf("You printed Odd number for %d times\n", x);
}