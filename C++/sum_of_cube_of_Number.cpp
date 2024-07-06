#include<iostream>
using namespace std;
//sum of cubes of n natural nos.
int main(){
    int n,i,sum;
    cout<<"enter the number of your choice";
    cin>>n;
    sum=0;
    for(i=1;i<=n;i++){
        
        sum=sum+(i*i*i);

    }
    cout<<"sum is:"<<sum<<"\n";

}
