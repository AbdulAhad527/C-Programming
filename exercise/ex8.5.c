//	Exercises-3) Write a program that will sort 2d array in ascending order and descending order.
#include<stdio.h>
int main()
{
int m,n,i,j;
int arr[m][n];
printf("Enter rows and column size:\n");
scanf("%d%d",&m,&n);
printf("\nenter values:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
	scanf("%d",&arr[i][j]);
}
}
printf("\nYou entered:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
	printf("%d\t",&arr[i][j]);
}
printf("\n");
}
}
