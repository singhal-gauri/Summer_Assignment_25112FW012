#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number n: ";
    cin>>n;
    int n1=n;
    int digit;
    int sum=0;
    while(n!=0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<"the sum of digits of number "<<n1<<" is "<<sum;
}