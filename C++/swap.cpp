#include <iostream>
using namespace std;
//program to swap two numbers without using a temporary variable
int main(){
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<" 1st number is "<<a<<"\n";
    cout<<" 2nd number is "<<b<<"\n";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping, 1st number is "<<a<<"\n";
    cout<<"after swapping, 2nd number is "<<b<<"\n";
}