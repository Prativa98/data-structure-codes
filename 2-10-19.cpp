#include<iostream>
using namespace std;
int main(){
int a,b,temp,*x,*y;
cout<<"enter 2 values:\n"<<endl;
cin>>a;
cin>>b;
x=&a;
y=&b;
cout<<"Before swaping values are: \n"<<*x<<" "<<*y<<endl;
temp=*x;
*x=*y;
*y=temp;
cout<<"after swapping:\n"<<*x<<" "<<*y<<" "<<endl;






}
