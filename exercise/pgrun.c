#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char ch[100];
FILE *fs=fopen("source.c","r");
if(fs==NULL)
{
printf("cannot open file");
fclose(fs);
exit(1);
}

//FILE *fd=fopen("destination.c","w");
//if(fd==NULL)
//{
//printf("cannot open file");
//fclose(fd);
//exit(1);	
//}
//printf("enter some thing about you:");


while(fgets(ch,100,fs)!=NULL)
{
//if(ch==EOF)
//break;
//else

;
puts(ch);
//if (ch==EOF)
//break;
}
//fclose(fd);
fclose(fs);



}