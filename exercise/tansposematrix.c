//Example – 8:- Write a program to find transpose of matrix.
#include <stdio.h>
 
int main()
{
   int m, n, i, j, matrix[10][10], transpose[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
 
   printf("Enter the elements of matrix\n");
 
   for (i = 0; i < m; i++)
      {
	  for(j = 0; j < n; j++){
	  
         scanf("%d",&matrix[i][j]);
  }}
for (i = 0; i < m; i++)
{	 
for(j = 0; j < n; j++)
 {  printf("%d\t",&matrix[i][j]);
	}
	printf("\n");
}
 printf("Transpose of a matrix is:\n");
 for (i = 0; i < m; i++)
   {
	     for(j = 0; j < n; j++)
        transpose[i][j]=matrix[j][i];         
     
	 }
	 for (i = 0; i < m; i++)
   {
	     for(j = 0; j < n; j++)
        printf("%d\t",transpose[i][j]);      
     printf("\n");
	 }
}
     