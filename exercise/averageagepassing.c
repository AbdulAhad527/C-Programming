//Write a program that passes an array containing age of person to a function. 
//This function should find average age and display the average age in main function



#include<stdio.h>
float average(float a[]);
int main()
{
	float c[]={15.1,23.4,13.0,63.5,51.2};
	printf("Average of age is:");
	average(c);
}
float average(float a[])
{
	int i;
	float average,sum=0.0;
	for(i=0;i<6;i++)
	{
		sum+=a[i];
	}
	average=sum/6;
	printf("%f",average);
}
