#include<stdio.h>
#include<conio.h>
struct prod
{
int id;
char name[30];
float cost;
};
void main()
{
int i;
struct prod p[10];
for(i=0;i<10;i++)
{
scanf("\n%d",&p[i].id);
scanf("\n%s",&p[i].name);
scanf("\n%f",&p[i].cost);
}
getch();
}