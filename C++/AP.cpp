#include<iostream>
using namespace std;
int main(){
    int a=1,d=2,n,i;
    cout<<"enter the number of terms to be added in AP ";
    cin>>n;
    cout<<a;
    for(i=1;i<=n;i++){
        a=a+d;
        cout<<","<<a;
    }
    
}
