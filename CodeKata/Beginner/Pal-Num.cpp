/*
* 12 - Check whether a number is palindrome or not
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,rev=0;
	cin>>a;
	while(a)
	{
	   rev = rev*10+a%10;
	   a/=10;
	}
	cout<<rev;
	return 0;
}
