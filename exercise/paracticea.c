//Example: Prompt the user to enter the salary and grade of an employee. If the employee has a grade greater than 15 then add 50% bonus to the employee’s salary. Otherwise if the employee’s grade is less than 15 then add 25% bonus to the employee’s salary.
#include<stdio.h>
#include<conio.h>
int main()
{ int sal,grade;
float bonus;
printf("Enter your salary:");
scanf("%d",&sal);
printf("Enter your grade:");
scanf("%d",&grade);
if(grade>=15)
{
	bonus=(sal*50)/100;
	sal=sal+bonus;
	printf("your salary is %d ",sal);
}

else
{
		bonus=(sal*25)/100;
		sal=sal+bonus;
	printf("your salary is %d ",sal);
}
	getch();
	
}