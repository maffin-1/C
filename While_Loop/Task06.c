//6
#include <stdio.h>
int main () {
    int x, result, odd = 0, even = 0; 
    while (1) {
        printf("Enter a number(0 for exit): ");
        result = scanf("%d", &x);
        if (result) {
            if (x == 0) break;
            switch (x % 2)
            {
            case 0:
                odd++;
                break;
            
            default:
                even++;
                break;
            }
        }
    }
    printf("Number of Odds = %d\nNumber of Evens = %d\n", odd, even);
}