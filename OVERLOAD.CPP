#include<iostream.h>
#include<conio.h>
class increment
{
int a;
public:
increment (int);
friend void operator ++(increment&);
friend void operator ++(increment&,int);
};
increment::increment(int x)
{
a=x;
}
void operator ++(increment& s)
{
cout<<++s.a;
}
void operator ++(increment& s,int)
{
cout<<s.a++;
}
void main()
{
clrscr();
increment i(10);
i++;
++i;
getch();
}