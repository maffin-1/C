#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int ni = 0, num, x = 0;
    srand(time(NULL));
    x = (rand() % 100);
    printf("Try to guess a number from 0 to 100. You have only 5 tries!\n");
    while (ni != 8)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num < x) 
        {
            printf("Your guess is too small! Try something bigger.\n"); 
            ni++;
        }
        else if (num > x) 
        {
            printf("Your guess is too big! Try something smaller.\n");
            ni++;
        }
        else if (num == x) break;
    }
        if(x == num){    
            printf("The number is %d\nYou guessed it in %d tries. Great work!\n", x, ni);
        }
        else printf("Sorry, but number was %d\nYou did a great work!\n", x);
}