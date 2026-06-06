#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number n: ";
    cin>>n;
    int n1=n;
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev= rev*10 + digit;
        n=n/10;
    }
    if(rev==n1){
        cout<<"the number "<<n1<<" is palindrom....";
    }
    else{
        cout<<"the number "<<n1<<" is not palindrom....";
    }
}