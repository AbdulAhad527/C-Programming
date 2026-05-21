//Write a program that takes any ASCII value from user and display next five char after that ASCII value. 
#include<stdio.h>
#include<conio.h>
int main()
{
	int ascii;
	printf("Enter any ascii value: ");
    scanf("%d",&ascii);
    printf("\nThe character for %d is %c",ascii,ascii);
    printf("\nThe ascii value for %d is %c",ascii+1,ascii+1);
    printf("\nThe ascii value for %d is %c",ascii+2,ascii+2);
    printf("\nThe ascii value for %d is %c",ascii+3,ascii+3);
    printf("\nThe ascii value for %d is %c",ascii+4,ascii+4);
    printf("\nThe ascii value for %d is %c",ascii+6,ascii+5);
    
    
    for(int i=1;i<=5;i++)
    printf("\nThe ascii value for %d is %c",ascii+i,ascii+i);
    getch();
    
}