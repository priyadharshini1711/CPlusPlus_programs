#include<iostream.h>
#include<conio.h>
void main()
{
int a[2][2],i,j,sum=0;
for(i=0;i<2;i++)
for(j=0;j<2;j++)
cin>>a[i][j];
for(i=0;i<2;i++)
for(j=0;j<2;j++)
{
sum=a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];
cout<<sum<<endl;
}
getch();
}
