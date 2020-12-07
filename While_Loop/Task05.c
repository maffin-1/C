//5
#include <stdio.h>
int main () {
    int x, result; 
    while (1) {
        printf("Enter a number(1000 for exit): ");
        result = scanf("%d", &x);
        if (result) {
            if (x == 1000) break;
            if (x > 9 && x < 100 && x % 3 ==0) {
                printf("Your lucky number is %d\n" , x);
            }
        }
    }
}