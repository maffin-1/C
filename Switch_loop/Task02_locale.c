#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <langinfo.h>
#include <locale.h>

void clear(void) {
    int c;
    while( (c = getchar() != '\n' && c != EOF ));
}

int main()
{
    int mon, fexit=1, f;
    char ans;
    const nl_item nl_months[12] = { MON_1, MON_2, MON_3, MON_4, MON_5, MON_6,
                                    MON_7, MON_8, MON_9, MON_10, MON_11, MON_12};
    setlocale(LC_ALL, "");   
    do
    {
        mon = 0;
        printf("Enter a month number: ");
        f = scanf("%d", &mon);
        clear();
        if (mon>0 && mon<=12) {
            printf("%s\n", nl_langinfo(nl_months[mon-1]));
        } else {
            printf("There is no such date!");
        }
        printf("Would you like to try it again? ");
        scanf("%c", &ans);
        clear();

        if (ans == 'N' || ans == 'n')
            fexit = 0;
    } while(fexit);
    printf("Goodbye!\n");
    
}