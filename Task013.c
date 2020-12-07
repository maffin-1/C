#include <stdio.h>
void main()
{
    int x = 0, done = 0, miss = 0, result, all = 0, c = 0;
    do
    {
        printf("Print a mark: ");
        result = scanf("%d", &x);
        if (result)
        {   all++;
            if (x< 0 || x > 100)
            {
                c++;
                continue;
            }
            else if(x >= 90) done++;
            else if(x <= 60) miss++;
        }  
    } while (x != -1);
    printf("\nAll inserted numbers: %d\nAll marks inserted: %d\nGood marks: %d\nBad marks: %d\n", all, all-c, done, miss);
}