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
	if(a>b)
	cout<<a;
	else 
	cout<<b;
	return  0;	
}
