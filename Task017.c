#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    int num1, num2,fExit = 0;
    char op, answ;
    
    do
    {
        printf("Enter an expression: ");
        scanf("%d%c%d", &num1,&op,&num2);
        switch (op)
        {
        case '+': printf("%d + %d = %d\n", num1, num2, num1+num2);
            break;
        case '-': printf("%d - %d = %d\n", num1, num2, num1-num2);
            break;
        case '*': printf("%d * %d = %d\n", num1, num2, num1*num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%d / %d = %d", num1, num2, num1/num2);
            else
            {
                printf("Can't divide by 0!\n");
                break;
            }
        default: printf("Invalid operator!");
            break;
        }
        printf("Would you like to continue? ");
        //int 
        flushall();
        scanf("%c", &answ);
        if(answ =='N' || answ == 'n')
            fExit = 1;
    } while (fExit);
    printf("Goodbye!\n");
    
}