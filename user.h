#include <iostream>
#include <fstream>
#include<conio.h>

using namespace std;
class reservation
{
      public:
      char name[30],from[10],to[10],type[10];
      int age,h,m,seats_count,count;
      reservation()
      {
       count=0;
      }
      void getdetails();
      }r[30];
      void reservation::getdetails(){
           cout<<"enter name";
           cin>>name;
           cout<<"from";
           cin>>from;
           cout<<"to";
           cin>>to;
           cout<<"enter type"<<"\n"
               <<"SEMI SLEEPER"<<"\n"
               <<"SLEEPER"<<"\n"
               <<"AC_SEMI SLEEPER"<<"\n"
               <<"AC_SLEEPER";
           cin>>type;
           cout<<"enter age";
           cin>>age;
           cout<<"enter hour";
           cin>>h;
           cout<<"enter minutes";
           cin>>m;
           cout<<"seats_count";
           cin>>seats_count;
           count=count+seats_count;
           if(count>30)
           cout<<"sorry there are no tickets";
}
