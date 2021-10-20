#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int num=1;
	while(n>0)
	{
		int a=n%10;
		while(a>0)
		{
			num=(a%2)+(num*10);
			a=a/2;
		}
		n=n/10;
	}
	cout<<num;
	return 0;	
}
