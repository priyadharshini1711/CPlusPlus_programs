/*
Given strings s1 and s2, you need to find if s2 is a rotated version of the string s1. The strings are lowercase.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each testcase contains two lines for s1 and s2.

Output:
For each testcase, in a new line, you need to print 1 if s2 is a rotated version of s1; else print 0.

Constraints:
1 <= T <= 103
1 <= |s1|, |s2| <= 107

Example:
Input:
4
geeksforgeeks
forgeeksgeeks
mightandmagic
andmagicmigth
mushroomkingdom
itsamemario
geekofgeeks
geeksgeekof

Output:
1
0
0
1
*/
#include<iostream>
#include<bits/stdc++.h> 

using namespace std;

bool areRotations(string str1, string str2) 
{
    if (str1.length() != str2.length()) 
        return false; 
        
    string temp = str1 + str1;  
    return (temp.find(str2) != string::npos); 
} 

int main()
{
    int t;
    cin>>t;
    while(t>0){
        string s1,s2;
        cin>>s1>>s2;
        cout<<areRotations(s1,s2)<<"\n";
        --t;
    }
 	return 0;
}
