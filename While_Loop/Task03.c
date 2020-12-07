//3
#include <stdio.h>
int main ()
{
    int x, result, number = 0, summ = 0; 
    while (1)     {
        printf("Enter a mark: ");
        result = scanf("%d", &x);
        if (result && x <= 100 && x >= 0) {
            if (x == 0) {
                if (number == 0){
                    printf("Not enough data to calculate average");
                }
                else{
                printf("your Average mark is %d\n" ,summ/number);
                }
                break;
            }
        number++ ;
        summ += x;
        }
    }
}