#include<stdio.h>
int factorial(int a)
{	int fact=1;
for(int i=1;i<=a;i++)
{
	fact=fact*i;
}
return(fact);
}

int main()
{ int num,factofnum;
	printf("Enter a number:");
	scanf("%d",&num);
	factofnum=factorial(num);
printf("factorial of a number is %d",factofnum);
}