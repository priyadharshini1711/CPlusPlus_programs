/*
output:

Enter a Number
5

0
1
2
3
4
5
*/
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter a Number";
	cin>>n;
	cout<<"\n";
	int i;
	for(i=0;i<=n;cout<<i<<"\n",i++);
	return  0;	
}
