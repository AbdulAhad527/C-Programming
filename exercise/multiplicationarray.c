//Exercises-2) multiply two matrices and store result in third matric.

#include<stdio.h>
#include<stdlib.h>
int main()
{
int r,c,m,n,k,i,j;
sos:
printf("\nEnter row and column size of 1st matrix:");
scanf("%d%d",&r,&c);
printf("\nEnter row and column size of 2nd matrix:");
scanf("%d%d",&m,&n);
if(c!=n)
{
printf("columns of first matrix are not equal to rows of second one so multiplication is not possible try some different values");
goto sos;}

int arr[r][c],arr2[m][n];
int product[r][n];
for (i = 0; i < r; ++i) {
    for (j = 0; j < n; ++j) {
        product[i][j] = 0;
    }
}
printf("\nEnter values: for 1st matrix:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr[i][j]);	
}
}
printf("\nEnter values: for 2nd matrix:");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr2[i][j]);	
}
}
printf("\nproduct of 1st and 2nd matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<n;j++)
{
for(k=0;k<c;k++)
{
product[i][j]+=(arr[i][k]*arr2[k][j]);
}
}
}
for(i=0;i<r;i++)
{

{
for(j=0;j<n;j++)
printf("%d\t",product[i][j]);
}
printf("\n");

}}