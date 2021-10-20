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
#include<bits/stdc++.h>
using namespace std;
void reverseEachWord(string &s){
    int start=0; // Initally word starting from 0
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            // Reverse from start till position of '.'-1
            // Reverse function reverses from [first,last) so i
            reverse(s.begin()+start,s.begin()+i);
            start=i+1;
        }
    }
    reverse(s.begin()+start,s.end()); // For last word
}
int main(){

    int t;
    cin>>t;
    cin.ignore();
    while(t--){
    
        string s;
        getline(cin,s);
        reverseEachWord(s);
        cout<<s<<endl;
    }
}
