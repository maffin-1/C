#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void main()
{
    unsigned long x = 0, y = 0; short maxlen = 0, result=0;
    unsigned long long new_number = 0;
    char n_format[10]="", g_format[1024]="new number is %0";
    printf("First number: ");
    result = scanf("%lu", &x);
    printf("Second number: ");
    result = scanf("%lu", &y);
    maxlen = (int)log10(fmaxf(x, y));
    for (int i=0; i<=maxlen ; i++) {
        new_number += (y % 10)*(int)pow(10, 2*i) + (int)pow(10, 2*i+1)*(x % 10); 
        x = x / 10; y = y / 10;
    }
	
    sprintf(n_format, "%d", (maxlen+1)*2);
    strcat(g_format, n_format);
    strcat(g_format, "llu\n");
    printf(g_format, new_number);
putc(g_format);
}
