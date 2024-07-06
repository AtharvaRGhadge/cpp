#include<iostream>
using namespace std;

int main(){
    int a,b=1,n,i;
    cout<<"enter a number and its power ";
    cin>>a>>n;
    
    for(i=1;i<=n;i++){
         
         b=b*a;       
    }
    cout<<a<<" raised to power "<<n<<" is "<<b;
     
}
