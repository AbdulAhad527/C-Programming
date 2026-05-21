#include<stdio.h>
#include<math.h>
int main()
{
	
	//11.	Write a program to evaluate a quadratic expression ax² + bx + c for a given value of x.
	int a,b,c,x;
	float result;
	printf("enter value of a b c and x");
	scanf("%d%d%d%d%d",&a,&b,&c,&x);
	result=a*x*x+b*x+c;
	printf("\nThe quadratic experession %dx^2+%dx+%d at x=%d is = %f",a,b,c,x,result);
	
	
}