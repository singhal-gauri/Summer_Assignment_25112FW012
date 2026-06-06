#include<iostream>
using namespace std;

int fact(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f=f*i;
    }
    return f;
    
}

int main(){
    int n;
    cout<<"enter number n: ";
    cin>>n;
    int n1=n;
    int strong=0;
    while(n!=0){
        int digit=n%10;
        strong=strong+ fact(digit);
        n=n/10;
    }

    if(strong==n1) cout<<n1<<" is a strong number.";
    else cout<<n1<<" is not a strong number.";
}