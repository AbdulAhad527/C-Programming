//14.	Write a program to reverse the digits of an integer using arithmetic operations.
#include<stdio.h>
#include<math.h>
int main()
{ int num,remainder,reversed;
printf("enter any number:");
scanf("%d",&num);
while(num!=0)
{
remainder=num%10;
reversed=reversed*10+remainder;
num=num/10;	
}
printf("\nthe reversed number is %d",reversed);
	
	
}