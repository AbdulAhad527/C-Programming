 //5.	Write a program in C to write multiple lines to a text file.
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
char name[30];
printf("Enter a file name in .txt format:");
gets(name);
FILE *p=fopen(name,"w");
char ch[300];

if(p==NULL)
{
printf("file is not ceated or opening");
exit(1);
}
printf("Enter something:");

while(strlen(gets(ch))>0)
{
fputs(ch,p);
fputs("\n",p);
}
fclose(p);
 }