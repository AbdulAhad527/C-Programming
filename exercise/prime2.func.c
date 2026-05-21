#include<stdio.h>
//Solve question one but confirmation about prime number should be in main function. 
//Your function prototype should be look like this:
//int prime(int );    return 1 if number is prime else return 2.

#include<stdio.h>
int flag=0;
void prime(int,int );
int main()
{
int num1;
printf("Enter any positive integer:");
scanf("%d",&num1);
	
for(int i=2;i<num1;i++)
{
if(num1%i==0)
{
flag++;
}
}
printf("if prime print 1 else print 2\n");
prime(1,2);
}

void prime(int m,int n)
{	
if (flag==0)
{
printf("\n%d ",m);
}
if(flag>0)
{
printf("%d",n);
}
}

