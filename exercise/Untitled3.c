//2.	Prompt the user to enter 3 values. For any equal values, the program should display the numbers that are equal. (For example user input 34,6,34 the program should display the message that the 1st and 3rd values are equal).
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter 1st value:");
scanf("%d",&a);
printf("\nEnter 2nd value:");
scanf("%d",&b);	
printf("\nEnter 3rd value:");
scanf("%d",&c);
printf("%d  %d  %d",a,b,c);
if(a==b)
printf("\n%d and %d are equal",a,b);
else if(b==c)
printf("\n%d and %d are equal",b,c);
else if(a==c)
printf("\n%d and %d are equal",a,c);
else
printf("invalid input");
}