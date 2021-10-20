#include<iostream.h>
#include<conio.h>
class att
{
public:
char name[10];
int id,count;
};
void main()
{
clrscr();
att a[10];
int i,j,k,hr,ab,abs[10];
for(i=0;i<10;i++)
{
cin>>a[i].name;
cin>>a[i].id;
}
cout<<"enter hrs";
cin>>hr;
for(i=0;i<hr;i++)
{
cout<<"enter number of ab for hr"<<i;
cin>>ab;
if(ab>0)
{
cout<<"enter roll no of ab";
for(j=0;j<ab;j++)
{
cin>>abs[j];
for(k=0;k<ab;k++)
{
a[k].count=hr;
if(a[k].id==abs[j])
a[k].count--;
}
}
}
}
for(i=0;i<10;i++)
{
cout<<a[i].id<<"\t"<<a[i].name<<"\t"<<a[i].count<<"\t";
cout<<"\n";
}
getch();
}