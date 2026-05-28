#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    cout<<"The factorial of "<<n<<" is "<<fact;
}