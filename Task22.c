#include <stdio.h>
#include <ctype.h>
void main() {
    char b=0;
    int upp = 0, low = 0 ;
    printf("print a letter: ");
    do {
        scanf("%c", &b);
        if (!isalnum(b)) continue;
        if ( islower(b) ) low++;
        if ( isupper(b) ) upp++;
        printf("print a letter: ");
    } while (! isdigit(b));

    printf("\nlower:%4d\nupper:%4d\n", low, upp);
    
}