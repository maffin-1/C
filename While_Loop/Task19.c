#include <stdio.h>
void main()
{
    int mark;
    while(1)
    {
        printf("Enter a mark: ");
        scanf("%d", &mark);
        if(mark <= 100 && mark > 55)
            printf("good mark\n");
        else if(mark <= 55 && mark >= 40)
            printf("not good mark\n");
        else if(mark > 100 || mark < 0) break;
    }
}