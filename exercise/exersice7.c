//64 36	56	47	40	54	61	60	58	64	54	
//48 59	45	63	54	50	49	51	60	58	59


//) Example three only tells that number found in an array or not. Your program should also notify: 
//a)	Index of the array where value found
//b)	Number of times element found in array
#include<stdio.h>
int main()
{long int arr[22]={64,36,56,47,40,54,61,60,58,64,54,48,59,45,63,54,50,49,51,60,58,59};
int num,count=0,i;
for(i=0;i<22;i++)
{
	printf("%ld,",arr[i]);
}
printf("\nEnter any value to check its index number and number of times it will appear:");
scanf("%d",&num);
for(i=0;i<22;i++)
{
if (arr[i]==num)
{
printf("\n%d is found at index %d",num,i);
count++;		
}

}
printf("\nnumber is found %d times in array",count);
}

	
