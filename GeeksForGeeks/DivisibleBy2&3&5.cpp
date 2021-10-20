/**/
#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	//Actual Numbers
	int s2,s3,s5; 
	
	//LCM Numbers
	int s6,s15,s10;
	
	s2=2*(((n/2)*((n/2)+1))/2);
	s3=3*(((n/3)*((n/3)+1))/2);
	s5=5*(((n/5)*((n/5)+1))/2);
	s6=6*(((n/6)*((n/6)+1))/2);
	s15=15*(((n/15)*((n/15)+1))/2);
	s10=10*(((n/10)*((n/10)+1))/2);	
	cout<<s2+s3+s5-s6-s10-s15;
	return 0;
}
