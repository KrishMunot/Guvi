/*
* 10 - Count number of digits of an integer.
*/

#include <iostream>
using namespace std;

int main() {
	int num,count=0;
    	cin >> num;
	while(num > 0) {
	    num/ = 10;
	    count+ = 1;
	} 
	cout << count << endl;
	return 0;
}
