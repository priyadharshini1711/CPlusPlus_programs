#include<stdio.h>
#include<conio.h>
int a[5],max=4,r=-1,f=-1;
void enqueue()
{
int x;
printf("enter the value");
scanf("%d",&x);
if(((r+1)%5)==f)
printf("overflow");
else if(r==-1)
{
f=r=0;
a[r]=x;
}
else
{
r=(r+1)%5;
a[r]=x;
}
}
void dequeue()
{
if(f==-1)
printf("underflow");
else if(f==r)
{
printf("%d is deleted",a[f]);
f=r=-1;
}
else
{
printf("%d is deleted",a[f]);
f=(f+1)%5;
}
}
void main()
{
int i;
clrscr();
for(i=0;i<5;i++)
enqueue();
dequeue();
getch();
}