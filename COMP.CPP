#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int n,x;
cin>>a;
strcpy(b,a);
strrev(a);
x=strcmp(a,b);
if(x==0)
cout<<"valid";
else
cout<<"invalid";
getch();
}
