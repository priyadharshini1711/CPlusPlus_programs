#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>

using namespace std;

fstream bus;
fstream ud;
class details
{
      public:
      char bus_no[10],bus_name[10],from[10],to[10],type[10];
      int hr,min,seats;
      void install();
}d[5];
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
      char name[30],from[10],to[10],type[15];
      int age,h,m,seats_count;
      void getdetails();
      };
      void user::getdetails()
      {
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
	 if(strcmp(type,"semisleeper")==0)
	 cout<<"your total sum is"<<seats_count*500;
	 else if(strcmp(type,"sleeper")==0)
	 cout<<"your total sum is"<<seats_count*600;
	 else if(strcmp(type,"acsemisleeper")==0)
	 cout<<"your total sum is"<<seats_count*700;
	 else if(strcmp(type,"semisleeper")==0)
	 cout<<"your total sum is"<<seats_count*800;
	 cout<<"your total sum is"<<seats_count*1000;
	 }
class payment
{
      public:
      char amt[3],card_no[16],ccv_no[3];
      void getamt();
};
void payment::getamt()
      {
	   int ch;
	   cout<<"enter mode of payment"<<"\n"
	       <<"1.debit card"<<"\n"
	       <<"2.credit card"<<"\n"
	       <<"3.paytm"<<"\n"
	       <<"4.slicepay"<<"\n"
	       <<"5.netbanking";
	   cin>>ch;
	   cout<<"enter card number";
	   cin>>card_no;
	   cout<<"enter ccv number";
	   cin>>ccv_no;
	   cout<<"confirm booking.(yes/no)";
	   cin>>amt;
	   cout<<"payment successful"<<"\n"
	       <<"check mail for confirmation";
}
class admin
{
public:
char name[10],password[30];
public:
admin()
{
strcpy(name,"admin");
strcpy(password,"12345");
}
};
//details d[5];
user u;
payment p;
admin a;
int main()
{
char user_name[10],pass[10];
int ch,i=0;
cout<<"welcome to vec bus reservation system"<<"\n"
	   <<"select the login mode"<<"\n"
	   <<"1.admin"<<"\n"
	   <<"2.user";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"enter user name";
cin>>user_name;
cout<<"password";
cin>>pass;
if(strcmp(pass,a.password)==0)
{
cout<<"enter bus details";
do
{
d[i].install();
bus.open("bus.txt",ios::out);
bus.write((char*)&d[i],sizeof(d[i]));
i++;
}while(i<5);
bus.close();
}
}
case 2:
{
cout<<"start user reservation process";
u.getdetails();
p.getamt();
}
}
return 0;
}
