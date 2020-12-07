#include <stdio.h>
void main() {
    int result, num, x, y, z;
    while (1)
    {
        printf("Enter your 3 digits number: ");
        result = scanf("%d", &num);
        if (result) {
            if (num < 99 || num > 1000) break;
        }
        x = num % 10;
        y = ( num / 10 ) % 10;
        z = num / 100;
        if (z < y && y < x) {
            printf("%d\n", num);
        }
    }
}