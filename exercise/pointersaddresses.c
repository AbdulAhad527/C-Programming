//•Exercise 1) A program to declare 5 pointers and print its addresses.
#include<stdio.h>
int main()
{
int *p1;
char *p2;
float *p3;
void *p4;
double *p5;
printf("addres of p1 is :%p,%d\n",&p1,&p1);
printf("addres of p2 is :%p,%u\n",&p2,&p2);
printf("addres of p3 is :%p,%x\n",&p3,&p3);
printf("addres of p4 is :%p,%s\n",&p4,&p4);
printf("addres of p5 is :%p,%f\n",&p5,&p5);
}