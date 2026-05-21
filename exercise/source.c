#include <stdio.h>
 
int main()
{
  int size;
   printf("Enter size of array:");
   scanf("%d",&size);
   int array[size];
    printf("Enter %d integer(s)\n", size);
  
   for (int i = 0; i < size; i++)
    scanf("%d", &array[i]);
    
   for(int i=size-1;i>=0;i--)
   {
   	printf("\n%d",array[i]);

   }}