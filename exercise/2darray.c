//Example -1:- A program to input elements in a two dimensional array and print it.
#include<stdio.h>
void ascending_order(int arr[3][3],int rows,int columns)
{
int i,j,k=0;
int size=rows*columns;
int one_d[size];

for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
one_d[k++]=arr[i][j];
}
}
for (i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(one_d[i]>one_d[j])
{
int temp=one_d[i];
one_d[i]=one_d[j];
one_d[j]=temp;
}
}
}
k = 0; // Reset k for copying back
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            arr[i][j] = one_d[k++];
        }
    }
}	

void descending_order(int arr[3][3],int rows,int columns)
{
int i,j,k=0;
int size=rows*columns;
int one_d[size];

for(i=0;i<rows;i++)
{
for(j=0;j<columns;j++)
{
one_d[k++]=arr[i][j];
}
}
for (i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(one_d[i]<one_d[j])
{
int temp=one_d[i];
one_d[i]=one_d[j];
one_d[j]=temp;
}
}
}
k = 0; // Reset k for copying back
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            arr[i][j] = one_d[k++];
        }
    }
}
void print_arr(int arr[3][3],int rows,int columns)
{
for(int i=0;i<rows;i++)
{
for(int j=0;j<columns;j++)
{
printf("%d",arr[i][j]);
}
}	
}

int main()
{int rows=3,columns=3;
int arr[3][3]={{1,2,3},{4,2,12},{7,2,9}};
ascending_order(arr,rows,columns);
print_arr(arr,rows,columns);
printf("\n");
descending_order(arr,rows,columns);
print_arr(arr,rows,columns);
}