#include<stdio.h>
int main()
{
	int matrix[10][10],transpose[10][10],i,j;
	printf("Enter values of matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			transpose[i][j]=matrix[j][i];
		}
	}
	printf("transpose of a matrix is:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
}}