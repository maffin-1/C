#include <stdio.h>
void main()
{
   int x;
   printf("Number: ");
   scanf("%d", &x);
   for (int i = x; i > 0; i-- ) printf("%d\n", i);
}