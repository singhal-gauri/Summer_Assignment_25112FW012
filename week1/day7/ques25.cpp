#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return factorial(n-1)* n;
}
int main(){
    int n;
    cout<<"enter number n: ";
    cin>>n;
    cout<<"Factorial= "<<factorial(n);
}