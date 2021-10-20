#include<stdio.h>
#include<conio.h>
int count(int);
void main()
{
int num,result;
printf("enter the number");
scanf("%d",num);
result=count(num);
printf("sum of digits is %d",result);
getch();
clrscr();
}
int count(int x)
{
int mod,sum=0;
if(x>0)
{
mod=x%10;
sum=sum+count(x/10);
return sum;
}
else
return 0;
}