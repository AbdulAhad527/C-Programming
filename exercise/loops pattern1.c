#include<stdio.h>

int print1()
{
	int i,spac;
for( i=1;i<=5;i++)
{
for( spac=1;spac<=5-i;spac++)
	{
	printf(" ");	
	}
for(int j=1;j<=2*i-1;j++)
{
	printf("%d",j);
}
printf("\n");
}
for(int i=1;i<=5;i++)
{

spac=1;
for(;spac<=i;spac++)
{
	printf(" ");
}
for(int k=1;k<10-2*i;k++)
{
	printf("%d",k);
}
printf("\n");
}
}
int main()
{
	print1();printf("\t\t\t\t");print1();
}

