#include<stdio.h>
#include<conio.h>
int a[5];
void create()
{
int i;
for(i=0;i<5;i++)
scanf("\n%d",&a[i]);
}
void display()
{
int i;
for(i=0;i<5;i++)
printf("\n%d",a[i]);
}
void main()
{
create();
display();
getch();
}