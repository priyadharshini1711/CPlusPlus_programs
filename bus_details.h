#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class details{
      char bus_no[10],from[10],to[10],type[10];
      int hr,min,seats;
      public:
             void install();
             };             
      void details::install()
      {
                   cout<<"enter bus no"<<"\t";
                   cin>>bus_no;
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
      
 
