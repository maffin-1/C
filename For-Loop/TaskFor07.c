#include <stdio.h>
void main() {
    int num , i, sum = 0, result;
    for (i = 0; i < 6; i++){
        printf("Print a number here for 5 times: ");
        if (scanf("%d", &num) )sum +=num;
    } 
    printf("average is %d\n", sum/i);
}