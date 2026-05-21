//determinant of two by two matrix
#include<stdio.h>
void _2x2det(int mat[2][2])
{
	int determinant=(mat[0][0]*mat[1][1])-(mat[0][1]*mat[1][0]);
	int det=determinant;
printf("determinant = %d",det);
}
void _3x3det(int mat2[3][3])
{int a,b,c;
 a=((mat2[0][0])*(mat2[1][1]*mat2[2][2])-(mat2[1][2]*mat2[2][1]));
 b=((mat2[0][1])*((mat2[1][0]*mat2[2][2])-(mat2[1][2]*mat2[2][0])));
 c=((mat2[0][2])*(mat2[1][0]*mat2[2][1])-(mat2[1][1]*mat2[2][0]));
printf("determinant = %d",(a-b+c));
}
int main()
{
int mat[2][2],mat2[3][3],i,j;
printf("enter elements of 2x2 matrix:");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&mat[i][j]);}
}
printf("\nyou entered:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}
printf("\ndeterminant of this matrix is:");
_2x2det(mat);
printf("\nenter elements of 3x3 matrix:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&mat2[i][j]);}
}
printf("\nyou entered:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",mat2[i][j]);
}
printf("\n");
}
printf("\ndeterminant of this matrix is:");
_3x3det(mat2);
}