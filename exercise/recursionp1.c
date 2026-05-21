#include<stdio.h>
int multiply(int,int);
int main(){
int a,b,add;
printf("Enter any two integers: ");
scanf("%d%d",&a,&b);
add= sum(a,b);
printf("Multiplication of two integers is %d",add);
return 0;
}
int sum(int a,int b){
static int add=0,i=0;
if(i <= a){
add = i + b;
i++;
sum(a,b);
}
return add;
}

