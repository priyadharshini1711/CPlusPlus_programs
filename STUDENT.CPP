#include<iostream.h>
#include<conio.h>
class student
{
char name[10];
int id,i,spt,pos,r,sum,s,opt;
public:
void getdata()
{
cout<<"enter name";
cin>>name;
cout<<"enter id ";
cin>>id;
}
void academic()
{
cout<<"enter rank";
cin>>r;
if(r==1)
r=60;
else if(r==2)
r=50;
else if(r==3)
r=40;
else if((r>3)&&(r<=10))
r=30;
else if((r>10)&&(r<=20))
r=20;
else
r=10;
}
void sports()
{
sum=0;
cout<<"enter the no of sports";
cin>>s;
for(i=1;i<=s;i++)
{
cout<<"enter the points for"<<i<<" sport out of 20";
cin>>spt;
sum=sum+spt;
}
spt=sum/s;
}
void others()
{
sum=0;
cout<<"enter the other activities record ";
cin>>s;
for(i=1;i<=s;i++)
{
cout<<"enter the points for"<<i<<" sports out of 20";
cin>>opt;
sum=sum+opt;
}
opt=sum/s;
}
void overall()
{
pos=r+spt+opt;
cout<<"total="<<pos;
}
void first(student x1,student x2)
{
cout<<"\nfirst is";
if((pos>x1.pos)&&(pos>x2.pos))
cout<<name<<id;
else if((x1.pos>pos)&&(x2.pos>pos))
cout<<x1.name<<x1.id;
else
cout<<x2.name<<x2.id;
}
};
void main()
{
int i;
clrscr();
student s,s1,s2;
s.getdata();
s.academic();
s.sports();
s.others();
s.overall();
s1.getdata();
s1.academic();
s1.sports();
s1.others();
s1.overall();
s2.getdata();
s2.academic();
s2.sports();
s2.others();
s2.overall();
s.first(s1,s2);
getch();
}