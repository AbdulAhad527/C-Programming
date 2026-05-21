//Write a program that generates random number specified by user against,
//How many random number he/she wanted?
//Provide the range of the random numbers


#include<stdlib.h>
#include<stdio.h>
int main()
{
int numbers,rangei,rangef,frequency0=0,frequency1=0,frequency2=0,frequency3=0,frequency4=0,frequency5=0,frequency6=0;
srand(time(NULL)); 

for(int i=1;i<=60000;i++)
{
	int face=1+rand()%6;
	
	switch(face)
	{
	case 1:
	frequency1++;
	break;
	case 2:
	frequency2++;
	break;
	case 3:
	frequency3++;
	break;
	case 4:
	frequency4++;
	break;
	case 5:
	frequency5++;
	break;
	case 6:
	frequency6++;
	break;
	}
	
}
printf("\nfrequency of 1 is:%d",frequency1);
printf("\nfrequency of 2 is:%d",frequency2);
printf("\nfrequency of 3 is:%d",frequency3);
printf("\nfrequency of 4 is:%d",frequency4);
printf("\nfrequency of 5 is:%d",frequency5);
printf("\nfrequency of 6 is:%d",frequency6);
}