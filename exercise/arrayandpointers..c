#include<stdio.h>
int main()
{
int arr[2][2]={{1,2},{2,3}};
int *ptr;
ptr=arr;
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
printf("%d",*(ptr+i * 2+j));
}
}
}