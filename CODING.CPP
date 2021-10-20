#include<iostream.h>
#include<conio.h>
void main()
{
int x,a,b,i,sum=0;
cout<<"enter the multiple";
cin>>x;
cout<<"enter the value of a";
cin>>a;
cout<<"enter the value of b";
cin>>b;
i=a;
if(x>1&&x<100)
while(i<=b)
{
if(i%x==0)
sum=sum+i;
i++;
}
cout<<"sum="<<sum;
getch();
}
