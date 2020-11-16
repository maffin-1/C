#include <stdio.h>
void main() {
    int num = 19, i;
    for (i=num ; i > 1; i-- ){
        if (i % 2){
            printf("%d\n", i);
        }
    }
}