//3.	Define a structure named Circle to represent a circle with a radius. 
//Write a C program to calculate the area and perimeter of two circles and display the results. 
#include<stdio.h>
struct circle
{
float radius;
};
int main()
{
float pi=3.14;
float area1;
float perimeter1;
float area2;
float perimeter2;
struct circle c[2] ;
for(int i=0;i<2;i++)
{
printf("Enter radius of %d cirlce:",i+1);
scanf("%f",&c[i].radius);	
}
area1=3.14*c[0].radius*c[0].radius;
perimeter1=2*3.14*c[0].radius;
area2=3.14*c[1].radius*c[1].radius;
perimeter2=2*3.14*c[1].radius;
printf("\narea of first circle is:%f",area1);
printf("\nperimeter of first circle is:%f",perimeter1);
printf("\narea of second circle is:%f",area2);
printf("\nperimeter of second circle is:%f",perimeter2);
}	
	
