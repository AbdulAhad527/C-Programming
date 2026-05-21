#include<stdio.h>
#include<math.h>
int main()
{
	//12.	Calculate the Greatest Common Divisor (GCD) of two numbers using the Euclidean algorithm.
	int a,b,temp;
printf("enter value of a");
scanf("%d",&a);
printf("\nenter value of b");
scanf("%d",&b);
if(a>b){

while(b!=0)
{temp=b;
b=a%b;
a=temp;	
}
printf("\ngcd=%d",a);
}

else
{
	while(a!=0)
{temp=a;
a=b%a;
b=temp;	
}
	

printf("\ngcd=%d",b);}
}