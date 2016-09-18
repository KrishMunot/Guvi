#include<bits/stdc++.h>
void change(int c,int inti,int final,int t);
void main()
{
 int change(int,int,int,int);
 int disk=3;
 cout<<"move to the disk";
 change(disk,1,3,2);
}

void change(int c,int inti,int final,int t)
{
  if(c>0)
  {
   change(c-1,inti,t,final);
   cout<<"new dis" <<c<<" from "<<inti<<"to "<<final<<endl;
   change(c-1,t,final,inti);
  }
}
