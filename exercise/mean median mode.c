//A program to input a matrix and find its mean ,median ,standard deviation(write separate function).
#include<stdio.h>
int main()
{int arr[10][10],i,j,r,c,sum=0;
printf("Enter size of rows and columns of an array:");
scanf("%d%d",&r,&c);
int n=r*c;
printf("enter values of an array:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",arr[i][j]);	
}
printf("\n");
}
printf("mean of the elements of array is:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum=sum+arr[i][j];
}
}
printf("mean = %d",(sum/n));
}