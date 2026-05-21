//1.	Create a structure called "Student" with members name, age, and total marks.
// Write a C program to input data for two students, display their information, and find the average of total marks.

#include<stdio.h>
int main()
{
struct student 
{
char name[30];
int age;
int tmarks;
};
struct student s[2];
for(int i=0;i<2;i++)
{ printf("\nenter data of %d student name age and totalmarks",i+1);
scanf("%s%d%dtmarks",&s[i].name,&s[i].age,&s[i].tmarks);
}
int avg=(s[0].tmarks+s[1].age)/2;
for(int i=0;i<2;i++)
{printf("\ndata of %d student:",i+1);
printf("\n%s,%d,%d,%d",s[i].name,s[i].age,s[i].tmarks,avg);
}

}
