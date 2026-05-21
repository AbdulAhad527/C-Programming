//8.	Write a program in C to append multiple lines to the end of a text file.
#include<stdio.h>
int main()
{
FILE *ptr=fopen("alll","a");
fprintf(ptr,"hello");
fclose(ptr);
}