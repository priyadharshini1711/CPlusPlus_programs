#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,j,x,y;
char a[3][3];
printf("\n your index is ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d%d\t",i,j);
}
printf("\n");
}
for(i=0;i<9;i++)
{
printf("\n enter your index value");
scanf("%d\t%d",x,y);
printf("\ enter your choice x or o");
scanf("\t%c",a[x][y]);
}
printf("\ your table is");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t %c",a[i][j]);
}
printf("\n");
}
getch();
}
