//1) Write a program that contains a function which 
//takes one integer type of argument and confirm  that number is prime or not.
#include<stdio.h>
int prime(int num);
double primee(float num);

int main()
{
float num1;
for(int i=0;i<=2;i++)
{
float num1,a=4.3;
static float b=4.3;
printf("%f\n",a);
printf("%f\n",b);
a++;
b++;
printf("%f\n",a);
printf("%f\n",b);
}
	printf("Enter any positive integer:");
	scanf("%f",&num1);
	prime(num1);
}
double primer(float num)
{
	printf("%f",num);
}
int prime(int num)
{
int flag=0;
for(int i=2;i<num;i++)
{
if(num%i==0)
{
flag++;
}
}
if (flag>0)
{
printf("%d is not prime",num);
}
if(flag==0)
{
printf("%d is prime",num);
}
}