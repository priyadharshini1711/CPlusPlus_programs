/*
Given an array of distinct elements. Your task is to find the third largest element in it. You have to complete the function thirdLargest which takes two argument. The first argument is the array a[] and the second argument is the size of the array (n). The function returns an integer denoting the third largest element in the array a[]. The function should return -1 if there are less than 3 elements in input.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case is N, size of array. The second line of each test case contains N space separated values of the array a[].

Output:
Output for each test case will be the third-largest element of the array.

Your Task:
You don't need to read input or print anything. Your task is to complete the function thirdLargest() with accepts the array and number of elements as arguments and returns the third largest element of the array.

Constraints:
1 = T = 100
1 = N = 105
1 = A[i] = 105

Example(To be used for only expected output):
Input:
2
5
2 4 1 3 5
2
10 2
Output:
3
-1
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
long long thirdLargest(long long a[],long long n);
 
int main()
{int t;
cin>>t;
while(t--)
{
	long long n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<thirdLargest(a,n)<<endl;
}
}// } Driver Code Ends
 /* The function should return third largest element 
     in arr[0..n-1]. It may be assumed that all elements
     are distinct.  */
long long thirdLargest(long long a[], long long n)
{
     if(n<3)
     return -1;
     else
     {
        int i, j;  
        int t;
    	for (i = 0; i < 3; i++)
    	{    
    // Last i elements are already in place  
	    	for (j = 0; j < n-i-1; j++)  
    		{
        		if (a[j] > a[j+1])  
            	{
					t=a[j];
                	a[j]=a[j+1];
                	a[j+1]=t;                
            	}
    		}                 
   		}
		return a[n-3];
    } 
}

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
