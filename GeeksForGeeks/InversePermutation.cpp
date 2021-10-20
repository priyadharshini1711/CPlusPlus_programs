/*
Given an array A of size n of integers in the range from 1 to n, we need to find the inverse permutation of that array.
Inverse Permutation is a permutation which you will get by inserting position of an element at the position specified by the element value in the array. For better understanding, consider the following example:
Suppose we found element 4 at position 3 in an array, then in reverse permutation, we insert 3 (position of element 4 in the array) in position 4 (element value).

Input:
The first line of the input contains an integer T denoting the number of test cases. For each test case, the first line contains an integer n, denoting the size of the array A  followed by n-space separated integers i.e elements of array A.

Output:
For each test case, the output is the array after performing inverse permutation on A.

Constraints:
1<=T<=100
1<=n<=50
1<=A[i]<=50
Note: Array should contain unique elements and should have elements from 1 to n. 

Example:
Input:
3
4
1 4 3 2
5
2 3 4 5 1
5
2 3 1 5 4

Output:
1 4 3 2
5 1 2 3 4
3 1 2 5 4
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
 	    int a[n],i;
 	    for(i=0;i<n;i++)
 	    cin>>a[i];
 	    int b[n];
 	    for(i=0;i<n;i++)
 	    {
 	        b[a[i]-1] = i+1;
 	    }
 	    for(i=0;i<n;i++)
 	    cout<<b[i]<<" ";
 	    cout<<"\n";
 	    --t;
 	}
}
