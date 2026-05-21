#include<stdio.h>
#include<math.h>
int main()
{
	//13.	Write a program to calculate the Least Common Multiple (LCM) using GCD.
	int a,b,x,y,temp,gcd;
	float lcm;
printf("enter large value");
scanf("%d",&a);
printf("\nenter small value");
scanf("%d",&b);
x=a;
y=b;

while(b!=0)
{temp=b;
b=a%b;
a=temp;	
}
printf("\ngcd=%d",a);
gcd=a;
lcm=(x*y)/gcd;
printf("\nlcm=%f",lcm);

}