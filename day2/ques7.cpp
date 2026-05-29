#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number n: ";
    cin>>n;
    int n1=n;
    int product=1;
    while(n!=0){
        int digit=n%10;
        product=product*digit;
        n=n/10;
    }
    cout<<"the product of digits of number "<<n1<<" is "<<product;
}
