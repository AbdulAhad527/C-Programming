#include<stdio.h>
#include<conio.h>
void sum(int , int, int &);
int main()
{
	int n1,n2,add;
	printf("Enter two numbers:");
	scanf("%d%d",&n1,&n2);
	printf("\n");
	sum(n1,n2,add);
	printf("Sum of %d and %d is:%d", n1, n2, add);
}
void sum(int a,int b,int &su)
{
su=a+b;

}


