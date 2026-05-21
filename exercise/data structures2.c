//2.	Create a structure named Book to store book details like title, author, and price. 
//Write a C program to input details for three books, 
//find the most expensive and the lowest priced books, and display their information.
#include<stdio.h>
int main()
{
struct book {
char name[20];
int price;
int bookpages;

};
struct book s[3];
for(int i=0;i<3;i++)
{ printf("\nenter data of %d book name price and bookpages",i+1);
scanf("%s%d%d",&s[i].name,&s[i].price,&s[i].bookpages);
}

for(int i=0;i<3;i++)
{
printf("\ndata of %d book:",i+1);
printf("\n%s,%d,%d",s[i].name,s[i].price,s[i].bookpages);

}
int detail1=0,detail2=0;
int max;
int min;
for(int i=1;i<3;i++)
{
	max=s[0].price;

if (s[i].price>max)
{
	max=s[i].price;
	detail1=i;
}
}
for(int i=1;i<3;i++)
{
min=s[0].price;
if (min>(s[i].price))
{
	min=s[i].price;
	detail2=i;
}		
}


printf("\nthe most expensive book is %d and its detailis:%s %d %d",max,s[detail1].name,s[detail1].price,s[detail1].bookpages);
printf("\nthe most cheap book is %d and its detailis:%s %d %d",min,s[detail2].name,s[detail2].price,s[detail2].bookpages);
return 0;
}