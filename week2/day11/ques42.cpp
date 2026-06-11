#include<iostream>
using namespace std;

int max(int a,int b){
    if(a>b){
        cout<<a<<" is maximum";
    }
    else if(b>a){
        cout<<b<<" is maximum";
    }
    else{
        cout<<"Both are equal";
    }
    return 0;
}

int main(){
    int a;
    int b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    max(a,b);
}