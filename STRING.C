#include<stdio.h>
#include<conio.h>
void main()
{
int i,flag=0;
char b,c,d,a[3][10]={"priya","shreya","abi"};
clrscr();
printf("\n enter the series");
scanf("%c%c%c",&b,&c,&d);
for(i=0;i<3;i++)
{
if((a[i][0]==b)||(a[i][0]==c)||(a[i][0]==d))
flag++;
}
if(flag==3)
printf("\n match is correct");
else
printf("\n match is incorrect");
getch();
}
