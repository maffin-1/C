#include <stdio.h>
void main() {
    int result, num, x, y ,z;
    while (1)
    {
        printf("number with 4 digits: ");
        result = scanf("%d", &num);
        if(num > 10000 || num < 1000) break ;
        x = num / 1000;
        z = (num / 100) %10 ;
        y = num % 100;
        if ( (x + z) == y){
            printf("your number:%5d\n" , num);
        }

    }
    
}