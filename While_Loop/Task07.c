//7
#include <stdio.h>
int main () {
    int x, result;
    int max_bin = 16;
    short output[max_bin];

    while (1) {
        printf("Enter a number(0 for exit): ");
        result = scanf("%d", &x);
        if (result) {            
            if (x == 0) break;
            
            for (int i=0; i<max_bin; i++) {
                output[i] = x % 2;
                x = x / 2;
            }
            for(int i=0; i<max_bin; i++) printf("%d", output[max_bin - i - 1]);
            printf("\n");
        }
    }
}