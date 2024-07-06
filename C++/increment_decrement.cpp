#include<iostream>
using namespace std;
int main(){
    int I,J;
    cout<<"enter the value of I ";
    cin>>I;
    J=I++;//post increment first assigns and then increments
    cout<<" after post increment J is "<<J<<" and I is "<<I<<endl;
    J=I--;//post decrement first assigns and then decrements
    cout<<" after post decrement J is "<<J<<" and I is "<<I<<endl;
    J=++I;//pre increment first increments and then assigns
    cout<<" after pre increment J is "<<J<<" and I is "<<I<<endl;
    J=--I;//pre decrement first decrements and then assigns
    cout<<" after pre decrement J is "<<J<<" and I is "<<I<<endl;
}
