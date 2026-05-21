#include<stdio.h>
struct information
{
char name[20];
char address[20];
int rollnumber;
int clas;
};

int main()
{
struct information a1={"abdul","abbottabad",01,12};
print1 (a1);
}
print1 (struct information a1)
{
printf("%s,%s,%d,%d",a1.name,a1.address,a1.rollnumber,a1.clas);
}