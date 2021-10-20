/*
Provided a String of length N, your task is to find out whether or not the given string is a prime string. A prime string is a string in which the sum of the ASCII value of all the characters is prime.

Input:
The first line of the input contains an integer T, denoting the number of test cases. Then T test case follows. The first line of each test case contains an integer N denoting the length of the string, next line contains the input string str of length N.

Output:
For each test case print "YES" if the string is prime string else print "NO", on a new line.


Constraints:
1<=T<=102
1<=N<=108

Example:
Input
3
13
geeksforgeeks
4
JiiT
5
India
Output
YES
NO
NO
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        char s[n],i;
        cin>>s;
        int sum=0;
        for(i=0;i<n;i++)
        sum=sum+(s[i]);
        int f=0;
        for(i=2;i<=sqrt(sum);i++)
        {
            if(sum%i==0)
            {
                cout<<"NO"<<"\n";
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"YES"<<"\n";
        --t;
    }
 	return 0;
}


