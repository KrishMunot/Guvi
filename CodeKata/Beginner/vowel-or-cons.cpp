#include <iostream>
using namespace std;

int main() {
	char c;
	cin>>c;
	c = tolower(c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') cout<<"Vowel";
	else cout<<"Consonant"<<endl;
	return 0;
}
