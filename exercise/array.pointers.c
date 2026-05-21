#include<stdio.h>
int display(int *q,int row,int col);
int show(int (*q)[4],int row,int col);
int main()
{
int a[3][2]={{12,23},
{34,45},
{56,67}};
display(a,3,2);
show(a,3,2);
//print(a,3,2);
}
int display(int *q,int row,int col)
{
for (int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
printf("%d\t",*(q+i*col+j));
}
printf("\n");
}
}
show (int (*q)[4], int row, int col)
{
    int i, j;
    int *p; // p is a pointer to a single integer

    for (i=0; i<row; i++)
    {
        p = q + i; // p stores the address of the i-th row
        for(j=0; j<col; j++)
        {
            // The printf statement uses pointer arithmetic to access elements:
            printf ("%d\t",*(p+j)); 
        }
        printf("\n");
    }
    printf("\n");
}

