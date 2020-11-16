#include <stdio.h>
void main()
{
    int sum = 0, i, num;
    printf("How many marks you would like to insert?: ");
    scanf("%d", &i);
    for (; i > 0; i--)
        {
            printf("Print your mark: ");
            scanf("%d", &num);
            sum+=num;
        }
    printf("%d\n", sum);
}