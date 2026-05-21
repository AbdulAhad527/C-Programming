
#include<stdio.h>
int main()
{
int i,j;
	double a[5],sum=0.0,avg=0.0;
	printf("Enter five values:");
	for(i=0;i<5;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%lf\t",a[i]);
		sum=sum+a[i];
    }
	
	
	avg=sum/5.0;
		printf("\n%lf\n",avg);
		printf("\n number below average");
	for(i=0;i<5;i++)
	{
	if(a[i]<avg)
	printf("\t%lf\t",a[i]);
	
    }
printf("\n number above average");
	for(i=0;i<5;i++)
	{
	if(a[i]>avg)
	printf("\t%lf\t",a[i]);
	
    }
printf("\nSorting of an array:");
for(i=0;i<5;i++)
{
	for(j=i+1;j<5;j++)
	{
		if(a[i]>a[j])
		{
			double temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%lf\t",a[i]);	
    }

}