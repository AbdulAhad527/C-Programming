//Prompt the user to input three values so as to display them in ascending order.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter first value:");
	scanf("%d",&a);
	printf("\nEnter second value:");
	scanf("%d",&b);
	printf("\nEnter third value:");
	scanf("%d",&c);
	printf("\nHere is the ascending order");
	if(a<b&&a<c)
	{
		if(b<c)
		printf("%d %d %d",a,b,c);
		else if(c<b)
		printf("%d %d %d",a,c,b);
	}
	if(b<a&&b<c)
	{
		if(a<c)
		printf("%d %d %d",b,a,c);
		else if(c<b)
		printf("%d %d %d",b,c,a);
	}
	if(c<a&&c<b)
	{
		if(a<b)
		printf("%d %d %d",c,a,b);
		else if(b<a)
		printf("%d %d %d",c,b,a);
	}
	else
	{
	
	printf("\ninvalid entry");
	
	}
	getch();
}