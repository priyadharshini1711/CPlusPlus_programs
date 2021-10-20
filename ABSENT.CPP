#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char x;
int p=19,d=16,c=20,a=18,t=24,e=15;
while(1)
{
cin>>x;
if(x=='p')
p--;
else if(x=='d')
d--;
else if(x=='c')
c--;
else if(x=='a')
a--;
else if(x=='t')
t--;
else if(x=='e')
e--;
else
break;
}
cout<<"\n pds1="<<p;
cout<<"\n dbms="<<d;
cout<<"\n ca="<<c;
cout<<"\n adc="<<a;
cout<<"\n tpde="<<t;
cout<<"\n evs="<<e;
getch();
}