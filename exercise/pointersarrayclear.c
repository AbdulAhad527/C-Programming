#include<stdio.h>
int main()
{
int arr[]={1,1,2,2,3,4,5};
int n=sizeof(arr);
int i,j;
int *p=arr;
for(i=0;i<n;i++)
printf("%d,",*(p+i));
printf("\n we are deleting duplicate numbers\n");
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	if(*(p+i)==*(p+j))
	{
		for(int k=j;k<n;k++)
		*(p+k)=*(p+k+1);
		j--;
		
	}
	
}
for(i=0;i<n;i++)
printf("%d,",*(p+i));
}