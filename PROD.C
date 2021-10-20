#include<stdio.h>
#include<conio.h>
struct prod
{
char name[30];
int id;
float cost;
};
void main()
{
int i;
struct prod p[10];
clrscr();
for(i=0;i<10;i++)
{
printf("\n name:");
scanf("\t%s",&p[i].name);
printf("\n%s",p[i].name);
printf("\n id:");
scanf("\t%d",&p[i].id);
printf("\n cost :");
scanf("\t%f",&p[i].cost);
}
getch();
}