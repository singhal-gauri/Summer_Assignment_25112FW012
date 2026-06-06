#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n: ";
    cin>>n;
    int n1=n;
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }

    if(sum==n1) cout<<n1<<" is perfect number.";
    else cout<<n1<<" is not a perfect number.";
}