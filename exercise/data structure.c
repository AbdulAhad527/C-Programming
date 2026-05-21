#include<stdio.h>
int main()
{
typedef struct info
{
char info[400];
}info;
struct data_std1
{
char name[10];
int roll_no;
int id;
};

struct data_std2
{
struct data_std1 b1;
int class;
};
info b1;
printf("Enter your information:");
gets(b1.info);
puts(b1.info);
struct data_std2 a1={"abdul",12,13,12};
printf("\n%s",a1.class);
}