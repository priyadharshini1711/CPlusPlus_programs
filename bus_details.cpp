#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class details{
      char bus_no[10],bus_name[10],from[10],to[10],type[10];
      int hr,min,seats;
      public:
             void install();
             }d[5];             
      //fstream fp;
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
      
 int main()
 {
     char ch;
     int i,count=0;
     fstream fp;
     fp.open("details.bin",ios::out|ios::binary);
     if(!fp){
		cout<<"Error in creating file...\n";
		return -1;
    }
     for(i=0;i<1;i++)
     {
     d[i].install();
     fp.write((char*)&d[i],sizeof(d[i]));
     }
     while(!fp.eof())
    {
        fp.get(ch);
        count++;
    }
        cout << "Number of characters in file are " << count;
    
     fp.close();
     getch();
     return 0;
 }     
