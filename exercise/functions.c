
#include<stdio.h>
#include<math.h>
int factorial(int a)
{ int fac=1;
	for(int i=1;i<=a;i++)
	{
		fac=fac*i;
	}
	return fac;

}
int strong(int a)
{
	int remainder,temp,str=0;
	 temp=a;
	 while(temp!=0)
	 {
	 	remainder=temp%10;
	 	str=str+factorial(remainder);
	 	temp/=10;
	 }
	 if(str==a)
	 {
	 	printf("\nit is strong ");}
	 	else
	 	{
	 		printf("\nit is not strong");
		 }
	 }

int main()
{

int fact,e;
fact=factorial(5);
printf("%d",fact);
printf("\nenter a number to check whether it is strong or not");
scanf("%d",&e);
strong(e);
}