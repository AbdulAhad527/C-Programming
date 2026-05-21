#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
struct employee
{
char name[20];
int rollno;
int id;
int address;
};
struct employee emp;
FILE *p=fopen("employeessdsdsds.docx","w");
if(p=NULL)
{
printf("targeted file could not accessed");
exit(1);
}
char ch='y';
while(ch=='y')
{
printf("Enter details of an employee(name,rollnumber,id,address):");
scanf("%s%d%d%d",&emp.name,&emp.rollno,&emp.id,&emp.address);
fprintf(p,"%s%d%d%d",emp.name,emp.rollno,emp.id,emp.address);
printf("\nAdd another record yes or no:");
fflush(stdin),
scanf("%c",&ch);
}
}