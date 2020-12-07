#include <stdio.h>
void main() {
    int x , y=0;
    printf("Write a nember: ");
    scanf("%d", &x);
    while (y < x){
        printf("*");
        y++;
    }
    printf("\n");
}
