#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int x = 0, y = 0, maxlen = 0;
    unsigned long long new_number = 0;
    char n_format[10], g_format[1024];
    printf("First number: ");
    scanf("%d", &x);
    printf("Second number: ");
    scanf("%d", &y);
    // if (x > y) {maxlen = (int)log10(x);}
    // else {maxlen = (int)log10(y);}
    maxlen = (int)log10(fmaxf(x, y));
    for (int i=0; i<=maxlen ; i++) {
        new_number += (y % 10)*(int)pow(10, 2*i) + (int)pow(10, 2*i+1)*(x % 10); 
        x = x / 10; y = y / 10;
    }
	
    sprintf(n_format, "%i", maxlen*2);
	strcat(g_format, "new_number is %0");
	strcat(g_format, n_format);
	strcat(g_format, "llu");
    printf(g_format, new_number);

}
