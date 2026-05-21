#include<stdio.h>
int num1,num2,num3;
void equal(int a,int b,int c)
{printf("input numbers are equal");
}


int max(int a,int b,int c)
{
if ((a>b)&&(a>c))
{
return a;
	}
else if((b>a)&&(b>c))
{
	return b;
	}	
else
{

return c;}
}
int main()
{
int maximum;
printf("enter three numbers:");
scanf("%d%d%d",&num1,&num2,&num3);
if ((num1)!=(num2)||(num1)!=(num3)){

maximum=max(num1,num2,num3);
printf("%d is maximum",maximum);
}
if ((num1==num2)&&(num1)==(num3)&&(num2)==(num3))
{

equal(num1,num2,num3);
}
}

