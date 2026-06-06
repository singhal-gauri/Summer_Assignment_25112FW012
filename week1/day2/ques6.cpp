#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number n: ";
    cin>>n;
    int n1=n;
    int revnum=0;
    while(n!=0){
        int digit=n%10;
        revnum= revnum*10 + digit;
        n=n/10;
    }
    cout<<"the reverse of number "<<n1<<" is "<<revnum;
}