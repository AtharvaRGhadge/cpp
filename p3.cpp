#include <iostream>
using namespace std;
//program to swap two numbers with using a temporary variable
int main(){
    int a,b,c;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<" 1st number is "<<a<<"\n";
    cout<<" 2nd number is "<<b<<"\n";
    c=b;
    b=a;
    a=c;
    cout<<"after swapping 1st number is "<<a<<"\n";
    cout<<"after swapping 2nd number is "<<b<<"\n";





}