#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	int i=0,flag=0,v,w,x,y,z;
	v=w=x=y=z=1;
	
	cin>>a;
	int l = (a.length())-1;
	while(l>i)
	{
	    if(a[i++]!=a[l--])
	    {
	        cout<<"Not a palindrome";
	        return 0;
	    }
	}
	for(int i=0;i<a.length()-1;i++)
	{
	   if(a[i]=='a') {flag+=v; v=0;}
	   else if(a[i]=='e') {flag+=w; w=0;}
	   else if(a[i]=='i') {flag+=x; x=0;}
	   else if(a[i]=='o') {flag+=y; y=0;}
	   else if(a[i]=='u') {flag+=z; z=0;}
	}
	
	if(flag>1) cout<<"true";
	else cout<<"false";
	
	return 0;
}
