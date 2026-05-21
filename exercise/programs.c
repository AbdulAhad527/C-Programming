//Write a program that inputs a 4 digit value from the user (for example 6382) and displays a result with an increment of 1 in each digit (i.e. 7493)\\

#include<stdio.h>
#include<conio.h>
int main()
{
	int th_value,h_value,t_value,num,result=0;
	printf("Enter any four digit number:");
	scanf("%d",&num);
	th_value=num/1000;
	num=num%1000;
	h_value=num/100;
	num=num%100;
	t_value=num/10;
	num=num%10;
	printf("\n%d%d%d%d",++th_value,++h_value,++t_value);
	getch();
}