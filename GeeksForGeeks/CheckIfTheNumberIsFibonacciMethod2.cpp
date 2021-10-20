/*
Check if a given number is Fibonacci number. Fibonacci number is a number which occurs in Fibonacci series.

Input:
The first line of input contains an integer T denoting the number of test cases.
Each test case contains a number.

Output:
Print "Yes" if the entered number is Fibonacci number else "No".

Constraints:
1 <= t <= 100
1 <= n <= 100

Example:
Input:
2
34
41
Output:
Yes
No

Method 2
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int a=(5*pow(n,2)) + 4;
        int b=(5*pow(n,2)) - 4;        
        if(sqrt(a)*sqrt(a) == a || sqrt(b) * sqrt(b) == b)
        cout<<"Yes"<<"\n";
        else 
        cout<<"No"<<"\n";
        --t;
    }
 	return 0;
}
