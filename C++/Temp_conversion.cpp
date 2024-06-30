#include <iostream>
using namespace std;
int main(){
    float F,C,K;
    char choice;
    cout<<"Enter your choice F,C,K ";
    cin>>choice;
    if(choice=='C' || choice=='c'){
        cout<<"Enter the temperature in degree Celsius \n";
        cin>>C;
        F=1.8*C+32;
        cout<<"Temperature in Fahrenheit is "<<F<<"\n";
        K=C+273.15;
        cout<<"Temperature in Kelvin is "<<K<<"\n";
    } 
    if(choice=='f' || choice=='F'){
        cout<<"Enter the temperature in degree Fahrenheit \n";
        cin>>F;
        C=(F-32)*0.55556;
        cout<<"Temperature in Celsius is "<<C<<"\n";
        K=(F-32)*0.556+273.15;
        cout<<"Temperature in Kelvin is "<<K<<"\n";
    }
    if(choice=='k' || choice=='K'){
        cout<<"Enter the temperature in degree Kelvin \n";
        cin>>K;
        F=((K-273.15)*1.8)+32;
        cout<<"Temperature in Fahrenheit is "<<F<<"\n";
        C=K-273.15;
        cout<<"Temperature in Celsius is "<<C<<"\n";
    }
    else{
        cout<<"Enter valid choice";
    }
} 
