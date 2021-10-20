#include<stdio.h>
#include<conio.h>
struct node
{
int x;
};
void main()
{
int i;
struct node p[10];
for(i=0;i<10;i++)
scanf("\n%d",&p[i].x);
printf("\n%d",p[i].x);
getch();
}