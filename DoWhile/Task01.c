#include <stdio.h>
void main() {
    int x=0;
    do
    {
        printf("Write your mark: ");
        scanf("%d",&x);
            if (x >= 80)
            {
                printf("Great, your mark is %d\n" , x);    
            }
    }
    while (x != 1);
    
}
