/*You are provided with a number, "N". Find its factorial.

Input Description:
A positive integer is provided as an input.

Output Description:
Print the factorial of the integer.

Sample Input :
2
Sample Output :
2
*/

#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
  	int p=1;
  	while(n>1)
  	{
    	p=p*n;
    	--n;
  	}
  	cout<<p;
    return 0;
}
