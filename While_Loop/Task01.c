//1
#include <stdio.h>
void main() {
    int x=0;

    while (x != 1)
    {
        printf("Write your mark: ");
        if (scanf("%d",&x)){
            if (x >= 80)
            {
                printf("Great, your mark is %d\n" , x);    
            }
        } else { break;}
    }
    
}
