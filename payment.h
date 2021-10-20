#include<iostream.h>

using namespace std;
class payment{
      char amt[3];
      int card_no[16],ccv_no[3];
      public()
      void getamt();
      };
      void payment::getamt()
      {
           cout<<"enter mode of payment"<<"\n";
               <<"1.debit card"<<"\n";
               <<"2.credit card"<<"\n";
               <<"3.paytm"<<"\n";
               <<"4.slicepay"<<"\n"
               <<"5.netbanking";        
           cout<<"enter card number"
           cin>>card_no;
           cout<<"enter ccv number";
           cin>>ccv;cout<<"confirm booking.(yes/no)";
           cin>>amt;
           cout<<"payment successful"<<"\n"
               <<"check mail for confirmation";
               }
      
               
           
           
      
