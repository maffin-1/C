/*#sinclude <stdio.h>
int main() {
	int x;
	const char * array[] = {
    "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"
};
	printf("print a num from 1-10: ");
	scanf("%d",&x);
	if (x>0 && x<=10) { printf("%s\n", array[x]); }

	if (x==1){ printf("one\n"); }
	else if (x==2){ printf("two\n"); }
	else if (x==3){ printf("three\n"); }
	else if (x==4){ printf("four\n"); }
	else if (x==5){ printf("five\n"); }
	else if (x==6){ printf("six\n"); }
	else if(x==7){ printf("seven\n"); }
	else if(x==8){ printf("eight\n"); }
	else if(x==9){ printf("nine\n"); }
	else if(x==10){ printf("ten\n");} 

	else { printf("not right number\n"); }
}
//3	
//	int x;
//	printf("print a mark: ");
//	scanf("%d" ,&x);
//	if (x<=100 && x>=90){
//		printf("Excellent\n");
//	}
//	else if (x<=89 && x>=70){
//		printf("Good\n");
//	}
//	else if(x<=69 && x>=60){
//		printf("Pass\n");}
//	else if(x<=59 && x>=0){
//		printf("Fail\n");}
//	else {
//		printf("not such mark\n");}

//4
//	int x;
//	printf("print two digts number: ");
//	scanf("%d",&x);
//
//	if (x>=10 && x<=99) {
//		
//		if(x%10==x/10){ 
//			printf("equal");
//		} 
//		else {
//			printf("not equal");
//		}
//			} 
//	else {
//		printf("not in range");
//	}
//	printf("\n");


//5
//	int x;
//	printf("inerface your age: ");
//	scanf("%d",&x);
//	if (x>=0 && x<=18){
//		printf("young\n");
//	}
//	else if(x>=19 && x<=64){
//		printf("Adult\n");
//	}
//	else {
//		printf("Old\n");
//	}

	int x,y,z,a;
	int min,max;
	printf("int num1 num2 num3 num4: ");
	scanf("%d %d %d %d", &x, &y, &z, &a);
	if (x>y){
	max=x; min=y;
	}
	else {
	max=y; min = x;
	}
	if (z<min){
		min=z;}
	else if(z>max){
	max=z;
	}
	if (a<min){
		min=a;}
	else if(a>max){
	max=a;
	}
printf("max: %d\nmin: %d\n", max, min);
printf("%d+%d=%d\n",min,max,min+max);
if((min+max)%2==0){
printf("odd\n");
}
else{
printf("not odd\n");}
}


#include <stdio.h>
void main()
{
	char letter;
	printf("interface something: ");
	scanf("%c", &letter);
	if (('a' <= letter && letter <= 'z') || ('A' <= letter && letter <='Z')) {
		printf("%c is a character", letter);
	}
	else if ('0'<=letter && letter <='9') {
		printf("%c is a number",letter);
	}
	else {
		printf("Its somethimg else");
	}
	printf("\n");
}

#include <stdio.h>
void main()
{
char op;
int num1, num2, res, opOK=1;
printf("Please enter a math expression(without spaces): ");
scanf("%d%c%d", &num1, &op, &num2);
if(op == '+')
	res=num1+num2;
else if(op == '-')
	res=num1-num2;
else if (op == '*')
	res=num1*num2;
else
	opOK = 0;
if(opOK == 1)
	printf("the result is%d\n",res);
else
	printf("invalid operand\n");
}
*/

#include <stdio.h>
int main() {
	int x;
	int i=0;
	int result;
	printf("enter the number of astrix: ");
	result = scanf("%d", &x);
	if (!result) {
		printf("wrong input: %d\n", x);
		return 1;
	}
	printf("%d records were read. value=%d\n", result, x);
	while (i < x) {
		printf("*");
		i++;
	}
	printf("\n");
}
