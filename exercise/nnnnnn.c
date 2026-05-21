//4.	Create a structure named "Employee" to store employee details such as employee ID, name, and salary. 
//Write a program to input data for three employees, find the highest salary employee, and display their information. 
#include<stdio.h>
int main()
{
struct employee {
char name[20];
int id;
int salary;

};
struct employee s[3];
for(int i=0;i<3;i++)
{ printf("\nenter data of %d employee name id and salary",i+1);
scanf("%s%d%d",&s[i].name,&s[i].id,&s[i].salary);
}

for(int i=0;i<3;i++)
{
printf("\ndata of %d employee is:",i+1);
printf("\n%s,%d,%d",s[i].name,s[i].id,s[i].salary);

}
int detail1=0;
int highest=s[0].salary;
for(int i=1;i<3;i++)
{
if (s[i].salary>highest)
{
	highest=s[i].salary;
	detail1=i;
}
}




printf("\nthe most highest paying employee is %d and its detailis:%s %d %d",detail1,s[detail1].name,s[detail1].id,s[detail1].salary);
return 0;
}