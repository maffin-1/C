//4
#include <stdio.h>
int main ()
{
    int x, result; 
    while (1)     {
        printf("Enter a mark: ");
        result = scanf("%d", &x);
        if (result) {
            if (x == 0) {
                break;
            }
            if (x > 100 || x < 0)
            {
                printf("Wrong Mark:%d\n" , x);
            }
            
        }
    }
}