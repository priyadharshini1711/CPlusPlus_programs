/*
output:

Enter two numbers 
3
1

The Greatest Number is 3
*/
#include<iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"Enter Two Numbers";
	cin>>a>>b;
	cout<<"The Greatest Number is ";
	a>b?cout<<a:cout<<b;
	return  0;	
}
