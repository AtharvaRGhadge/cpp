#include<iostream>
using namespace std;
//program to find whether a triangle is right angle or not
int main(){
    int a,b,c,d,e,f,g,h,i;
    cout<<"enter three sides of triangle";
    cin>>a>>b>>c;
    d=a*a;
    e=b*b+c*c;
    f=b*b;
    g=a*a+c*c;
    h=c*c;
    i=b*b+a*a;

    if(d==e){
         cout<<"it is a right angled triangle";
    }
    else if(f==g){
         cout<<"it is a right angled triangle";
    }
    else if(h==i){
        cout<<"it is a right angled triangle";
    }
    else{
        cout<<"it is not a right angled triangle";
    }
}
