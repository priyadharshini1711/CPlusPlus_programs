#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char x;
int p=0,d=0,c=0,a=0,t=0,e=0;
while(1)
{
cin>>x;
if(x=='p')
p++;
else if(x=='d')
d++;
else if(x=='c')
c++;
else if(x=='a')
a++;
else if(x=='t')
t++;
else if(x=='e')
e++;
else
break;
}
cout<<"pds2="<<p;
cout<<"dbms="<<d;
cout<<"ca="<<c;
cout<<"adc="<<a;
cout<<"tpde="<<t;
cout<<"evs="<<e;
getch();
}