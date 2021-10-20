/*
Given two arrays of A and B respectively of sizes N1 and N2, the task is to calculate the product of maximum element of first array and minimum element of second array.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each testcase contains 4 lines. First line contains size of the first array N1, next line contains elements of the first array separated by spaces. Third line contains size of the second array N2 and next line contains elements of the second array separated by spaces.

Output:
For each testcase, output the product of the max element of the first array and the minimum element of the second array.

Constraints:
1 <= T <= 100
1 <= N1, N2 <= 106
-108 <= Ai <= 108

Example:
Input:
2
6
5 7 9 3 6 2
6
1 2 6 -1 0 9
6
1 4 2 3 10 2
6
4 2 6 5 2 9

Output:
-9
20
*/
#include<iostream>
using namespace std;
int main()
{
 	int t;
 	cin>>t;
 	while(t>0){
 	    int n1;
 	    cin>>n1;
 	    int a[n1];
 	    int max=-99999999;
 	    int i;
 	    for(i=0;i<n1;i++)
 	    {
 	        cin>>a[i];
 	        if(a[i]>max)
 	        max=a[i];
 	    }
 	    int n2;
 	    cin>>n2;
 	    int b[n2];
 	    int min=99999999;
 	    for(i=0;i<n2;i++)
 	    {
 	        cin>>b[i];
 	        if(b[i]<min)
 	        min=b[i];
 	    }
 	    cout<<min*max<<"\n";
 	    --t;
 	}
}
