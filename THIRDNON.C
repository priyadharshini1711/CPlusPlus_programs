#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,i,j,sum=0,flag=0;
clrscr();
printf("\n enter two numbers");
scanf("%d%d",&a,&b);
sum=a+b;
c=sum;
i=1;
while(1)
{
sum=sum+i;
for(j=2;j<sum;j++)
{
if((sum%j)==0)
{
flag=1;
break;
}
}
if(flag==0)
break;
else
i++;
}
d=sum-c;
printf("\n the prime num is %d and third number is %d",sum,d);
getch();
}
