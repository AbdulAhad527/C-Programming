#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,b=1;
	while(a<=5)
	{while(b<=a)
	{printf("%d",b);
	b++;
	}
	printf("\n");
	a++;
	}
}