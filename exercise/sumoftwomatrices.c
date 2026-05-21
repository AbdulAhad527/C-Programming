
#include<stdio.h>
int main()
{
int m,n,p,q,first[10][10],second[10][10],sum[10][10];
printf("Enter rows and coloumns:");
scanf("%d %d",&m,&n);
printf("Enter elements of first matrix:");
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
{
	
scanf("%d",&first[i][j]);
}
}
printf("\nEnter elements of second matrix:");
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
{
scanf("%d",&first[i][j]);
}
}
printf("\nSum of matrices are:\n");
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
{
sum[i][j]=first[i][j]+second[i][j];
printf("%d\t",sum[i][j]);
}
printf("\n");
}


}

