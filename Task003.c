#include <stdio.h>
void main() {
    int num, i, result ;
    printf("enter number: ");
    result = scanf("%d", &num);
    if (result && num > 1){
        for (i=num ; i > 0 ; i-- ){
            printf("%d ", i);
        }
    }
    printf("\n");
}