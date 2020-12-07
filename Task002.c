#include <stdio.h>
void main() {
    int num, i, result ;
    printf("enter number: ");
    result = scanf("%d", &num);
    if (result && num > 1){
        for (i=1 ; i <=num; i++ ){
            if (i % 2){
                printf("%d\n", i);
            }
        }
    }
}