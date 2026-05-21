#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5},i;
int *ptr=arr;
printf("\naddress of array is:%p",arr);
printf("\naddress of ptr is %p",&ptr);
printf("\nvalue of ptr:%p",ptr);
for(i=0;i<5;i++)
{
printf("\naddress of arr[%d]:%p",i,&arr[i]);
printf("\naddress of *(ptr+%d):%p",i,(ptr+i));
}
}