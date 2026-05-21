//Example – 4:- Write a Program that finds maximum number in an array
#include <stdio.h>
 
int main()
{
   int array[100], max=0, i, n,location;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
 
   printf("Enter %d integer(s)\n", n);
 
   for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
 
 max=array[0];
   for (i = 1; i < n; i++)
   {
   	{
   	if(array[i]>max){
	   
	max=array[i];
	location=i+1;
   }   }		
	}
	printf("maximum number in array is %d and at location %d",max,location);
   }