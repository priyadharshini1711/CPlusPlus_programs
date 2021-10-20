#include<iostream>

using namespace std;

struct symbol
{
       char sym[20];
       int addr;
}s[50];


int main()
{
    int ch;
    cin>>ch;
    int val;
    char x[20];
    do
    {
    cout<<"1. Insert\n 2.Search\n 3..Display\n 4.Update\n 5.Exit";
    cin>>ch;
    switch(ch)
    {
              case 1:insert();break;
              case 2:search();break;
                   /*cout<<"\n enter label";
                   cin>>x;
                   val=search(x);
                   if(val==1)
                   cout<<"Label Found";
                   else 
                   cout<<"Label not Found";
                   break;*/
              case 3: display();break;
              case 4: update();break;
              case 5: exit(0);break;              
    }
    }
}
