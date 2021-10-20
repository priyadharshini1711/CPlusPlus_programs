#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<ctime>

using namespace std;

class details{
      char bus_no[10],bus_name[10],from[10],to[10],type[10];
      int hr,min,seats;
      public:
             void install();
      };             
      void details::install()
      {
       cout<<"enter bus no"<<"\t";
       cin>>bus_no;
       cout<<"enter bus name"<<"\t";
       cin>>bus_name;
       cout<<"from"<<"\t";
       cin>>from;
       cout<<"to"<<"\t";
       cin>>to;
       cout<<"type"<<"\t";
       cin>>type;
       cout<<"hour"<<"\t";
       cin>>hr;
       cout<<"minutes"<<"\t";
       cin>>min;
       cout<<"seats"<<"\t";
       cin>>seats;
      }
      class user
      {
      public:
      char name[30],from[10],to[10],type[10];
      int age,h,m,seats_count;
      void getdetails();
      };
      void user::getdetails(){
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
           }
class payment{
      public:
      char amt[3];
      int card_no[16],ccv_no[3];
      void getamt();
      };
      void payment::getamt()
      {
           cout<<"enter mode of payment"<<"\n"
               <<"1.debit card"<<"\n"
               <<"2.credit card"<<"\n"
               <<"3.paytm"<<"\n"
               <<"4.slicepay"<<"\n"
               <<"5.netbanking";        
           cout<<"enter card number";
           cin>>card_no;
           cout<<"enter ccv number";
           cin>>ccv_no;
           cout<<"confirm booking.(yes/no)";
           cin>>amt;
           cout<<"payment successful"<<"\n"
               <<"check mail for confirmation";
}
details d[5];
user u;
payment p;

int main()
{
    cout<<"welcome to vec bus reservation system";
    u.getdetails();
    getch();
    return 0;
}
          

      
 
