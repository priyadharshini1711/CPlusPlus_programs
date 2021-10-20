#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void mul(int**,int**);
void main()
{
int a[3][3],b[3][3],c[3][3],i,j;
printf("enter the matrix a");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",*(a+i)+j);
printf("enter the matrix b");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",*(b+i)+j);
mul(*a,*b);
/*/for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%t",*(*(c+i)+j));
}
printf("\n");
}/*/
getch();
}
void mul(int** x,int** y)
{
int d[3][3],i,j,k;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
d[i][j]=0;
for(k=0;k<3;k++)
*(*(d+i)+j)=*(*(d+i)+j)+(*(*(x+i)+j) * *(*(y+i)+j));
printf("\n%d",*(*(d+i)+j));
}
}
