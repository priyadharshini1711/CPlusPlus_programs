#include<iostream.h>
#include<conio.h>
enum week{sunday,monday=1,tursday=2,wednesday,thursday,friday};
void main()
{
week today;
today=thursday;
cout<<"day\t"<<today+1;
getch();
}