#include<stdio.h>
#include<stdlib.h>
struct car
{
char name[20];
int car_no;
char madein[20];
};
int main()
{
struct car arr[3]={"toyota",1432,"pakistan"};
//arr[0].name="abbasi";
for(int i=0;i<3;i++)
{
scanf("%s%d%s",&arr[i].name,&arr[i].car_no,&arr[i].madein);

}
fflush(stdin);
for(int i=0;i<3;i++)
{
printf("%s %d %s",arr[i].name,arr[i].car_no,arr[i].madein);
printf("\n");
}
//printf("%s",arr[0]);
//print(&c1);
///*
//struct car *ptr=&c1;	
//char *p=c1.name;
//printf("%s,%d,%s,%s",c1.name,c1.car_no,c1.madein,p);
//printf("%s,%d,%s",ptr->name,ptr->car_no,ptr->madein);
//int arr[20]={1,2,3,4};
//int *p2=arr;
//printf("\n%d",*p2);*/
//}
//print(struct car *p1)
//{
//printf("%d",p1->car_no);
}
