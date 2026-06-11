#include<iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
        }
    return f;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
}