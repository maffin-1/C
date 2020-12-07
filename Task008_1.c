#include <stdio.h>

void main()
{
    int num,sum=0;
    printf("type a number 1 if you friends 2 to family 3 to else\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        sum += 500;
        break;
    case 2:
        sum += 1000;
        break;
    case 3:
        sum += 250;
        break;  
    default:
        break;
    }
printf("type if you more 3 years 1/yes 0/no \n");
scanf("%d",&num);
        if (num==1 && sum<999)
        {
            sum+=50;
        }
printf("type if you are more 1 hour 1/yes 0/no \n");
scanf("%d",&num);
    if (num==1 && sum<999)
        {
            sum-=50;
        }
    printf("the sum is: %d \n",sum);
    

}