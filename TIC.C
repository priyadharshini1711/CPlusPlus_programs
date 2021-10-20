#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,n,x,y,flag=0;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d%d\t",i,j);
}
printf("\n");
}
printf("\n enter the number you had play with 8 or 9\t");
scanf("%d",&n);
for(i=0;i<9;i++)
{
printf("\n enter your index value\t");
scanf("%d\t%d",&x,&y);
printf("\n enter your choice 8 or 9");
scanf("%d",&a[x][y]);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
if(a[i][0]&&a[i][1]&&a[i][1]==n)
flag=1;
}
for(i=0;i<3;i++)
{
if(a[0][i]&&a[1][i]&&a[2][i]==n)
flag=1;
}
if(a[0][0]&&a[1][1]&&a[2][2]==n)
flag=1;
if(a[0][2]&&a[1][1]&&a[2][0]==n)
flag=1;
if(flag==0)
printf("\n you lose");
else
printf("\n you win") ;
getch();
}
