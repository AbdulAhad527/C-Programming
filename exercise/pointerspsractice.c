//•	A program to take information of Student (name, age, department, cgpa) and print its addresses along with its values.
#include<stdio.h>
int main()
{
char name[20],department[20];
float cgpa;
int age;
printf("\nenter your name:");
gets(name);
printf("\nenter your department:");
gets(department);
printf("\nenter your cgpa:");
scanf("%f",&cgpa);
printf("\nenter your age:");
scanf("%d",&age);
printf("\n");
puts(name);
printf("\naddress of name is %p\n",name);
puts(department);
printf("\naddress of department is %p",department);
printf("%d\naddress of %d is %p",age,age,age);

}