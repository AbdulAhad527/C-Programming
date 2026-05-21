#include<stdio.h>
void show(int &num);

int main()
{
int nu;
printf("Enter any num");
scanf("%d",&nu);
show(nu);
}
void show(int &num)

{
	printf("the number is %d",num);
	
}