/*
* 20 - Generate multiplication table 
*/

#include <iostream>
using namespace std;

int main() {
	int t,l;
	cin>>t>>l;
	for(int i=1;i<=l;i++)
	{
	    cout<<t<<" x "<<i<<" = "<<t*i<<endl;
	}
	return 0;
}
