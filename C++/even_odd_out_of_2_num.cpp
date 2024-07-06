#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers ";
    cin>>a>>b;
    if(a%2==0 && b%2==0){
        cout<<"both are even";
    }
    else if(a%2!=0 && b%2==0){
        cout<<a<<" is odd "<<b<<" is even";
    }
    else if(a%2==0 && b%2!=0){
        cout<<a<<" is even "<<b<<" is odd";
    }
    else if(a%2!=0 && b%2!=0){
        cout<<"both are odd";
    }

}
