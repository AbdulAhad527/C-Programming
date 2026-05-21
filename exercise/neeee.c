//6.Write a program in C to find the content of a file and the number of lines in a text file.
#include<stdio.h>
int main()
{
char ch;
int lines=0;
FILE *ptr;
ptr=fopen("alll","r");
if(ptr==NULL)
{
printf("notopen");
exit(1);
}
while(ch=fgetc(ptr)!=EOF)
{
printf("%c",ch);
if(ch='\n')
lines++;
}
printf("number of new lines=%d",lines);
fclose(ptr);
}