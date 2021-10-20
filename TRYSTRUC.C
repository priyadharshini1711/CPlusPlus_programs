#include<stdio.h>
#include<conio.h>
struct node
{
int id;
char name;
float cost;
};
void main()
{
int i;
struct node p[10];
clrscr();
for(i=0;i<10;i++)
{
scanf("\n%d",&p[i].id);
scanf("\n%s",&p[i].name);
scanf("\n%f",&p[i].cost);
}
for(i=0;i<10;i++)
{
printf("\n%d",p[i].id);
printf("\n%s",p[i].name);
printf("\n%f",p[i].cost);
}
getch();
}