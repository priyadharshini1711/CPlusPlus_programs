#include<iostream>
using namespace std;
class admin
{
      char name[30],password[30];
      public:
             admin()
             {
                    strcpy(name,"admin");
                    strcpy(password,"12345");
             }
             void admin_actions()
             {
                  int ch;
                  cout<<"choose the required action"<<"\n"
                      <<"1.add bus"<<"\n"
                      <<"2.modify bus"<<"\n"
                      <<"3.delete bus"<<"\n"
                      <<"4.view history"<<"\n"
                      <<"5.back";
                  cin>>ch;
                  switch(ch)
                  {
                            case 1:add();break;
                            case 2:modify();break;
                            case 3:delete();break;
                            case 4:view();break;
                            case 5:back();break;
                  ]
                  };
                            
             
