//10
#include <stdio.h>
int main () {
    int x, result, tenth = 0;
    while (1) {
        printf("Enter a number(12 for exit): ");
        result = scanf("%d", &x);
        if (result) {
            if (x == 12) break;
            if (x == 10) tenth++;
        }
    }
    printf("Ten was entered %d times\n" ,tenth);
}