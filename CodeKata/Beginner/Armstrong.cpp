/*
* 17 - Check armstrong number
/

#include <iostream>
using namespace std;

int main()
{
    int n,temp,r,result = 0;
    cin>>n;
    temp = n;
    
    while(temp)
    {
        r = temp%10;
        result += r*r*r;
        temp /= 10;
    }

    if(result == n)
        cout<<"Armstrong number"<<endl;
    else
        cout<<"not an Armstrong number"<<endl;
    return 0;
}
