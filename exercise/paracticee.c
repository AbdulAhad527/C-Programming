//9.	Calculate the compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main()
{
	int time,principal;
	float rate,amount,ci;
	printf("enter rate time and principal");
	scanf("%f%d%d",&rate,&time,&principal);
	amount=principal*pow(1+rate/100,time);
	ci=amount-principal;
	printf("\n%f",ci);
	printf("\n%f",amount);
	return 0;
	
}