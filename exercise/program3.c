/*Write a program that reads a four digit number from user, then the program separates digits of the number e.g. 4567 to be displayed as: 
4 
5
6
7  */

#include<stdio.h>
#include<conio.h>
int main()
{
int th_value,h_value,t_value,num;
	printf("Enter a four digit number:");
	scanf("%d",&num);
th_value=num/1000;
num=num%1000;
h_value=num/100;
num=num%100;
t_value=num/10;
num=num%10;
printf("\n%d",th_value);
printf("\n%d",h_value);
printf("\n%d",t_value);
printf("\n%d",num);
for(int i=1;i<=4;i++)
{
}

}