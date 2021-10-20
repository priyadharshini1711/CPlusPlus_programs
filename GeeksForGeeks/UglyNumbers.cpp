/*
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. For each testcase there is one line of input that contains the number N.

Output:
Print the Nth Ugly Number.

Constraints:
1 = T = 104
1 = N = 104

Example:
Input:
2
10
4
Output:
12
4
*/

#include<iostream>
using namespace std;
int main()
{
 	int t;
 	cin>>t;
 	while(t>0)
 	{
 	    int n;
 	    cin>>n;
 	    int i;
 	    for(i=1;;i++)
 	    {
 	        int m=i;
 	        while(m%2==0)
 	        {
 	            m=m/2;
 	        }
 	        while(m%3==0)
 	        {
 	            m=m/3;
 	        }
 	        while(m%5==0)
 	        {
 	            m=m/5;
 	        }
 	        if(m==1)
 	        {
 	            --n;
 	        }
 	        if(n==0)
 	        {
 	            cout<<i<<"\n";
 	            break;
 	        }
 	    }
 	    --t;
 	}
}
