//1) Write a program that contains a function which 
//takes one integer type of argument and confirm  that number is prime or not.
#include<stdio.h>
void factorial(int num)
{int fact=1;
for(int i=1;i<=num;i++)
{
	fact*=i;
}
printf("factorial of %d is:%d",num,fact);
}
int main()
{
factorial(4);
}