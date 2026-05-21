//Consider the following list of student’s grade
//36	56	47	40	54	61	60	58	64	54	
//48	59	45	63	54	50	49	51	60	58	59
//Initialize an array with above grades and find the following things about the above data.
//a)	The minimum grade
//b)	The maximum grade
//c)	Average
#include<stdio.h>
int main()
{
int a[]={36,56,47,40,54,61,60,58,64,54,48,59,45,63,54,50,49,51,60,58,59};
int max=a[0];
int min=a[0];

for(int i=0;i<21;i++)	
{
sum+=a[i];
	if(a[i]>max)
	max=a[i];
	if(a[i]<min)
	min=a[i];
}
int avg=sum/21;
for(int i=0;i<21;i++)	
{if a[i]==averae ;

}

printf("\naverage equals to:%d",avg);
	
}