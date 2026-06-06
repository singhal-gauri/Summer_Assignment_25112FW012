#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number n: ";
    cin>>n;
    int digit=0;
    int n1=n;
    while(n!=0){
        n=n/10;
        digit++;
    }
    cout<<"The no. of digits in "<<n1<<" is "<<digit;
}