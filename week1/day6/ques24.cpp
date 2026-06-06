#include<iostream>
using namespace std;
int main(){
    int base;
    cout<<"enter base number: ";
    cin>>base;
    int power;
    cout<<"enter the power: ";
    cin>>power;
    int ans=1;
    for(int i=1;i<=power;i++){
        ans=ans*base;
    }
    cout<<"Result: "<<ans;





    return 0;
}