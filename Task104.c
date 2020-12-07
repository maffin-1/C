#include <stdio.h>
#include <math.h>
void main() 
{
	int  x=1,y,n1=0,n2=0,n3=0,j1=0,j2=0,j3=0;
	
	while (x != 0)
	{
		printf("enter first number \n");
		scanf("%d", &x);
		printf("enter second number \n");
		scanf("%d", &y);


		if (x > 100)
		{
			n1 = x / 100;
			n2 = (x / 10) % 10;
			n3 = x % 10;
			
			
			j1 = y / 100;
			j2 = (y / 10) % 10;
			j3 = y % 10;
		
		printf("Your answer is %d%d%d%d%d%d\n", n1, j3, n2, j2, n3, j1);
		}
		if (x < 100)
		{
			n1 = x / 10;
			n2 = x % 10;
				
			j1 = y / 10;
			j2 = y % 10;
		printf("Your answer is %d%d%d%d\n", n1, j2,n2,j1);

		}
	}
}