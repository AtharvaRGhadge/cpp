#include <iostream>
using namespace std;
//program to check if a number is even or odd
int main(){
    int a;
    cout<<"enter a number: ";
    cin>>a;
    if(a%2==0){
        cout<<a<<" is even";
    }
    else{
        cout<<a<<" is odd";
    }
}