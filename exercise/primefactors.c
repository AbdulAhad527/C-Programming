#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int num,factors;
printf("enter a number:");
scanf("%d",&num);
int temp=num;
{
while(temp!=0)
{ int i,j;
for(i=2;i<=temp;)
{

	temp=temp/i;
	for(int j=1;j<=i;j++)
	{
	if(i%j!=0)
	printf("%d,",i);
}
	if(temp%i!=0)
	{
	i++;
	}
}
}
}
}
