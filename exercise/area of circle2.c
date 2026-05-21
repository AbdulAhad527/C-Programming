//:- Write a program that contains calculate_area( ) which takes radius of circle as argument and returns area of circle to main ( );
#include<stdio.h>
#define PI 3.14
float calculate_area(int);
int main()
{int radius;
float are;
printf("Enter value of radius:");
scanf("%d",&radius);
are=calculate_area(radius);
printf("\nArea of cirlce=%f",are);
}
float calculate_area(int r)
{
float area;
area=PI*r*r;
return(area);	
}