#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	char s;
	cin>>s;
	if((s>'a' && s<'z') || (s>'A' && s<'Z')) cout<<"Alphabet";
	else cout<<"Not an alphabet";
	return 0;
}
