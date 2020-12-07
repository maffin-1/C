//9
#include <stdio.h>
#include <limits.h>

int main () {
    int x, result, max = INT_MIN, min = INT_MAX; 
    while (1) {
        printf("Enter a number(0 for exit): ");
        result = scanf("%d", &x);
        if (result) {
            if (x == 0) break;
            if (x > max) { max = x; }
            if (x < min) { min = x; }
            
        }
    }
    if (max == INT_MIN || min == INT_MAX){
        printf("No Data Entered\n");
    }
    else{
        printf("Max Number = %d\nMin Numberr = %d\n", max, min);
    }
}