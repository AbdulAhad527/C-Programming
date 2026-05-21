#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	//15.	Implement a program to check if a number is an Armstrong number using arithmetic operators.
int num,original,n=0,remainder;
double result=0.0;
printf("Enter any number to check it is armstrong or not:");
scanf("%d",&num);
original=num;
while(original!=0)
{
original/10;	
n++;
}
original=num;
while(original!=0)
{
remainder=original%10;	
result=result+pow(remainder,n);
original=original/10;
}
if(result==num)
printf("it is armstrong");
else
printf("it is not");
return 0;
}