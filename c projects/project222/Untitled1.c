#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
#include<mmsystem.h>
void slow(char *message,int sp)
{
int  i=0;
while(message[i]!='\0')
{
printf("%c",message[i]);
Sleep(sp);
i++;
}
}
struct namaz
{

char monthname[10];
char fajr[10],zohar[10],asar[10],magrib[10],isha[10];
};
struct namaz PKnamaztiming[12]={ {"January","05:40","12:15","15:45","17:20","18:45"},
    {"February", "05:30", "12:20", "16:05", "17:50", "19:10"},
    {"March","05:00", "12:15", "16:25", "18:15", "19:35"},
    {"April","04:15", "12:10", "16:40", "18:35", "20:00"},
    {"May","03:45", "12:10", "16:50", "18:55", "20:30"},
    {"June","03:35", "12:15", "17:00", "19:15", "20:50"},
    {"July","03:50", "12:20", "16:55", "19:10", "20:45"},
    {"August","04:15", "12:15", "16:40", "18:45", "20:10"},
    {"September","04:35", "12:10", "16:10", "18:10", "19:30"},
    {"October","04:55","12:00", "15:40", "17:35", "18:55"},
    {"November","05:15","12:00", "15:15", "17:05", "18:30"},
    {"December","05:35","12:10", "15:30", "17:10", "18:40"}
	
};
int main()
{
system("color 3");
char name[10];
struct namaz check;
int check1=0;
char message1[]="\n\n\t\t\t=========NAMAZ TIME CALCULATOR ON APPROXDATA=========";
char message2[]="Enter month name and name of namaz to check its timing on the basis of approximate time of Pakistan:\n(spelling should be same like fajr,zohar,asar,magrib,isha and enter complete name of months)\n";
char message3[]="PROCESSNG..........";
slow(message1,15);
printf("\n\n\n\n");
slow(message2,15);
scanf("%s",&check.monthname);
scanf("%s",&name);
fflush(stdin);
slow(message3,20);
for(int i=0;i<12;i++)
{
if(strcasecmp(check.monthname, (PKnamaztiming[i].monthname)) ==0)
{
check1=1;
if(strcasecmp(name,"fajr")==0)
{
printf("\nyou have to offer your %s prayers at %s in the month of %s",name,PKnamaztiming[i].fajr,PKnamaztiming[i].monthname);
}
else if(strcasecmp(name,"zohar")==0)
{printf("\nyou have to offer your %s prayers at %s in the month of %s",name,PKnamaztiming[i].zohar,PKnamaztiming[i].monthname);
}
else if(strcasecmp(name,"asar")==0)
{printf("\nyou have to offer your %s prayers at %s in the month of %s",name,PKnamaztiming[i].asar,PKnamaztiming[i].monthname);
}

else if (strcasecmp(name,"magrib")==0)
{printf("\nyou have to offer your %s prayers at %s in the month of %s",name,PKnamaztiming[i].magrib,PKnamaztiming[i].monthname);
}
else if(strcasecmp(name,"isha")==0)
{printf("\nyou have to offer your %s prayers at %s in the month of %s",name,PKnamaztiming[i].isha,PKnamaztiming[i].monthname);
}
else
printf("\n invalid namaz detail entered");

}
}
if(check1)
{ mciSendString("open \"hayya_ala_salah_new.mp3\" type mpegvideo alias azan", NULL, 0, NULL);
    

    mciSendString("play azan wait", NULL, 0, NULL);
    
    mciSendString("close azan", NULL, 0, NULL);

}
return 0;
}