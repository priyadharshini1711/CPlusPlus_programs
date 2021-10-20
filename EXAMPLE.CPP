#include<iostream.h>
#include<conio.h>
class negate
{
int a;
public:
negate(int);
friend void operator-(negate&);
void display();
};
negate::negate (int x)
{
a=x;
}
void operator-(negate& x)
{
x.a=-a;
}
void negate::display()
{
cout<<a;
}
void main()
{
negate n(10);
-n;
n.display();
getch();
}