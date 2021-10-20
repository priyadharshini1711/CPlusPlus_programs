#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int year,i,a;
printf("enter the year");
scanf("%d",&year);
i=year%4;
a=year%400;
if((i!=0)||(a!=0)
printf("the given year is not a leap year");
else if(a==0)
printf("the given year is a leap year");
else if(i==0)
printf("the given year is a leap year");
else
printf("the given year is not a leap year");
getch();
}