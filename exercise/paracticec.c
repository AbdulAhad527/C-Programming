#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e,p_count=0,n_count=0,zero_count=0;
printf("Enter five numbers:");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a>1)
p_count++;
else if(a<1)
n_count++;
else if(a==0)
zero_count++;
if(b>1)
p_count++;
else if(b<1)
n_count++;
else if(b==0)
zero_count++;
if(c>1)
p_count++;
else if(c<1)
n_count++;
else if(c==0)
zero_count++;	
if(d>1)
p_count++;
else if(d<1)
n_count++;
else if(d==0)
zero_count++;
if(e>1)
p_count++;
else if(e<1)
n_count++;
else if(e==0)
zero_count++;
printf("\n the number of positive enteries are %d",p_count);
printf("\n the number of negative enteries are %d",n_count);
printf("\n the number of zero enteries are %d",zero_count);



	
	
}