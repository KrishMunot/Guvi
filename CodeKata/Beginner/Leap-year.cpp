/*
* 6 - Check whether the entered year is leap year or not
*/

#include<iostream>
using namespace std;

int main()
{
  int y;
  cin>>y;
  
  if (y%400 == 0)
    cout<<"Yes"<<endl;
  else if ( y%100 == 0)
    cout<<"No"<<endl;
  else if ( y%4 == 0 )
    cout<<"Yes"<<endl;
  else
    cout<<"No"<<endl; 
  return 0;
}
