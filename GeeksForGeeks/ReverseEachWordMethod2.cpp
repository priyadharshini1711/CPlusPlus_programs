/*
Given a String of length N reverse each word in it. Words are separated by dots.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases. Each case contains a string containing dots and characters.
 

Output:
For each test case, output a String in single line containing the reversed words of the given String.

Constraints:
1<=T<=10
1<=Length of String<=2000


Example:
Input:
2
i.like.this.program.very.much
pqr.mno

Output:
i.ekil.siht.margorp.yrev.hcum
rqp.onm
*/

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0){
        char x[2000];
		cin>>x;
		int st=0;
		int i,j;
		int len=strlen(x);
		for(i=0;i<len;i++)
		{
		    if(x[i]=='.')
		    {
		        for(j=i-1;j>=st;j--)
		        cout<<x[j];
		        cout<<".";
		        st=i+1;
		    }
        }
        for(i=len;i>=st;i--)
        cout<<x[i];
        cout<<" ";
        cout<<"\n";
        --t;
    }
 	return 0;
}
