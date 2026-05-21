#include<stdio.h>
int main()
{
struct car
{
char name[20];
int car_no;
char madein[20];
};
struct car c1={"toyota",1432,"pakistan"};
struct car *ptr=&c1;	
char *p=c1.name;
printf("%s,%d,%s,%s",c1.name,c1.car_no,c1.madein,p);
printf("%s,%d,%s",ptr->name,ptr->car_no,ptr->madein);
int arr[20]={1,2,3,4};
int *p2=arr;
printf("\n%d",*p2);
}
