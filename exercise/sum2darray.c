//Example -2:- Write a program that will add two matrixes entered by the user and print it.
#include<stdio.h>
int main()
{
int r,c,i,j;
printf("Enter row size:\n");
scanf("%d",&r);
printf("\nEnter column size:");
scanf("%d",&c);
int arr[r][c],arr2[r][c],sum[r][c];
printf("\nEnter values: for 1st matrix:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr[i][j]);	
}
}
printf("\nEnter values: for 2nd matrix:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr2[i][j]);	
}
}
printf("\nsum of 1st and 2nd matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",(arr[i][j]+arr2[i][j]));	
}
printf("\n");
}

}