//8
#include <stdio.h>
int main () {
    int x, result, positive = 0, negative = 0; 
    while (1) {
        printf("Enter a number(0 for exit): ");
        result = scanf("%d", &x);
        if (result) {
            if (x == 0) break;
            if (x > 0) {positive++;}
            else {negative++;}
        }
    }
    printf("Positive Numbers = %d\nNegative Numbers = %d\n", positive, negative);
}