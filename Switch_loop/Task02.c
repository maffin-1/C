#include <stdio.h>
#include <ctype.h>
#include <string.h>

void clear(void) {
    int c;
    while( (c = getchar() != '\n' && c != EOF ));
}

void main()
{
    int mon, fexit=1, f;
    char ans;
    
    do
    {
        mon = 0;
        printf("Enter a month number: ");
        f = scanf("%d", &mon);
        clear();
        switch (mon)
        {
            case 1: 
                printf("January\n");
                break;
            case 2: 
                printf("February\n");
                break;
            case 3: 
                printf("March\n");
                break;
            case 4: 
                printf("April\n");
                break;
            case 5: 
                printf("May\n");
                break;
            case 6: 
                printf("June\n");
                break;
            case 7: 
                printf("July\n");
                break;
            case 8: 
                printf("August\n");
                break;
            case 9: 
                printf("September\n");
                break;
            case 10: 
                printf("October\n");
                break;
            case 11: 
                printf("November\n");
                break;
            case 12: 
                printf("December\n");
                break;
            default: printf("There is no such date!");
                break;
        }
        printf("Would you like to try it again? ");
        scanf("%c", &ans);
        clear();

        if (ans == 'N' || ans == 'n')
            fexit = 0;
    } while(fexit);
    printf("Goodbye!");
    
}