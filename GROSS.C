#include<stdio.h>
#include<conio.h>
void main()
{
int ch,num,year,basic,da,ta,oa,inc,grosspay,a,b,c,i=1;
clrscr();
printf("the gross pay \n 1.manager \n 2.team leader \n 3.developer \n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("the gross pay of manager \n enter the number of manager");
scanf("%d",num);
printf("the basic of manager is");
scanf("%d",basic);
printf("the da of manager is ");
scanf("%d",&da);
printf("the ta of manager");
scanf("%d",&ta);
printf("the oa of manager is");
scanf("%d",&oa);
a=(basic*da)/100;
b=(basic*ta)/100;
c=(basic*oa)/100;
do
{
printf("the year of expirence of manager %d is",i);
scanf("%d",&year);
inc=(year*5)/100;
grosspay=(basic+a+b+c+inc);
printf("the gross pay of the manager %d is %d",i,grosspay);
i=i++;
}while(i<=num);
break;
default :
printf("invalid choice");
}
getch();
}