#include<stdio.h>
#include<conio.h>
int num();
void main()
{
int d,i;
printf("\n enter the number of digits");
for(i=0;i<=10;i++)
{
d=num();
printf("\n%d",d);
}
getch();
}
int num()
{
for(int i=0;i<10;i++)
return i;
}
