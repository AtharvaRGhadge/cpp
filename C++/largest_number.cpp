#include <iostream>
using namespace std;
//largest number out of given 3 numbers
int main(){
    float p,q,r;
    cout<<"enter three numbers";
    cin>>p>>q>>r;
    if(p>=q && p>=r){
        cout<<p<<" is largest";
    }
    else if(q>=r && q>=p){
        cout<<q<<" is largest";
    }
    else{
        cout<<r<<" is largest";
    }

}