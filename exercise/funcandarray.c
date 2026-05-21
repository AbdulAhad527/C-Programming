#include<stdio.h>
void modify(int a[])
{
	int i;
	for(i=0;i<3;i++)
	{
		a[i]=a[i]*a[i];
	}
}
int main()
{
int i,x[3];
printf("\nEnter array elements:");

for(i=0;i<3;i++)
{
scanf("%d",&x[i]);	
}
modify(x);
for(i=0;i<3;i++)
{
printf("%d\n",x[i]);	
}
}
