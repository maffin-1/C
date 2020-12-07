#include <stdio.h>
void main()
{
    int x = 0, num10 = 0, num20 = 0, num30 = 0, num40 = 0, num50 = 0, num60 = 0, num70 = 0, num80 = 0, num90 = 0, num100 = 0;
    while (x != -1)
    {
        printf("Print a mark: ");
        scanf("%d", &x);
        switch (x)
        {
        case 10:
            num10++;
            continue;
        case 20:
            num20++;
            continue;
        case 30:
            num30++;
            continue;
        case 40:
            num40++;
            continue;
        case 50:
            num50++;
            continue;
        case 60:
            num60++;
            continue;
        case 70:
            num70++;
            continue;
        case 80:
            num80++;
            continue;
        case 90:
            num90++;
            continue;
        case 100:
            num100++;
            continue;
        default: break;
        }
        
    }
    printf("10:%d\n20:%d\n30:%d\n40:%d\n50:%d\n60:%d\n70:%d\n80:%d\n90:%d\n100:%d\n", num10, num20, num30, num40, num50, num60, num70, num80, num90, num100);
    
}