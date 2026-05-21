#include<stdio.h>
#include<conio.h>
int main()
{
	int obt_marks,t_marks,num;
	float percentage;
	percentage=(obt_marks/t_marks)*100;
	printf("Enter total marks:");
	scanf("%d",&t_marks);
	printf("\nEnter obtain marks:");
	scanf("%d",&obt_marks);
    printf("\n MENU");
	printf("\nPress 1 to calculate percentage.Press 2 to display grade:\n");
	scanf("%d",&num);
	switch(num)
{
    case 1:
		printf("\n%f",percentage);
		break;
	case 2:
	if(percentage>=80)
	printf("Grade A");
	else if(percentage<80||percentage>=60)
	printf("Grade B");
	else if(percentage<60||percentage>=40)
	printf("Grade C");
	else if(percentage<30)
	printf("Failed!");
	default:
	printf("\n invalid entry");
		
}
getch();
}