#include <iostream>
using namespace std;
int main(){
     int n,i;
     cout<<"enter any number ";
     cin>>n;
    if(n==1 || n==0){
         
         
        cout<<"factorial is 1";

    }
    else if (n<0){

        cout<<"enter valid number";

    }
    else{
     int fact=1;
     for(i=1;i<=n;i++){
        
        fact=fact*i;
        
     }
     cout<<"factorial of "<<n<<" is "<<fact;
    } 
    
}
