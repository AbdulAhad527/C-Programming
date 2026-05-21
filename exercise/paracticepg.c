//15.	Implement a program to check if a number is an Armstrong number using arithmetic operators.
#include<stdio.h>
#include<math.h>
int main()
{
int n=0,original,num,remainder;	
double result;
printf("Enter any number:");
scanf("%d",num);
original=num;
while(original!=0)
{
	original=original/10;
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
printf("%d is an armstrong");
else
printf("%d is not armstrong");
}