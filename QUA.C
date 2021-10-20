#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a=1,b=5,c=4,d,r,s;
d=(b*b)-4*a*c;
if(d>=0)
{
r=-b+sqrt(d);
s=-b-sqrt(d);
printf("%d%d",r,s);
}
else
printf("\n invalid input");
getch();
}