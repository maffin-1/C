#include <stdio.h>
void main() {
    int x, result, y, z, k;
    while (1) {
        printf("print a number with three digits: ");
        result=scanf("%d", &x);
        if (result) {
            if (x < 99 || x > 1000) break;
            }
        k = x;
        y = x % 10;
        x = x / 10;
        z = x % 10;
        x = x / 10;
        if (z == y && z == x){
            printf("%d\n", k);
        }

    }
}