#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,max=10;
srand(time(Null));
for (i=1;i<=20;i++)
{int num=random(max);
	printf("%d",num);
	if(i%5==0)
printf("\n");
}
}