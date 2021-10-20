/*
Given a number and its base, convert it to decimal. The base of number can be anything such that all digits can be represented using 0 to 9 and A to Z. Value of A is 10, value of B is 11 and so on.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is the base and second line of test case is the number which is to be converted to decimal.

Output:
Decimal conversion of the given number is displayed in the output.

Constraints:
1 <= T <= 5
2 <= base <=16
1 <= N <= decimal equivalents till 999999999

Example:
Input:
3
2 
1100
16
11A
8
123
Output:
12
282
83
*/

#include<iostream>
#include<string.h>
using namespace std;

int baseConversion(char x[],int base)
{
    int len=strlen(x);
    int i;
    int power=1;
    int num=0;
    for(i=len-1;i>=0;i--)
    {
        int val;
        if(x[i]>='0' && x[i]<='9')
        val =(int) x[i] - '0';
        else 
        val =(int) x[i] - 'A' + 10;
        if(val>= base)
        return -1;
        num = num + (val*power);
        power=power*base;
    }
    return num;
}
int main()
{
    int t;
    cin>>t;
    while(t>0){
        char a[100];
        int base;
        cin>>base;
        cin>>a;
        cout<<baseConversion(a,base)<<"\n";
        --t;
    }
 	return 0;
}
