#include<stdio.h>
int main()
{
	int i,j,k,a[]={1,2,3,4,5};
	int *p[5]={a,a+1,a+2,a+3,a+4},**q[5]={p,p+1,p+2,p+3,p+4};
	printf("%d",(*(*(p+1))));
}
