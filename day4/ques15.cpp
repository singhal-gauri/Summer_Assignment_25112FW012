#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arms=0;
    int n1=n;
    int n2=n;
    int count=0;
    if(n==0){
        count=1;
    }
    else{
        while(n!=0){
            count++;
            n=n/10;
        }
    }
    while(n1!=0){
        int digit=n1%10;
        arms= arms + pow(digit,count);
        n1=n1/10;
    }
    
    if(arms==n2){
        cout<<n2<<" is a Armstrong number";  }
    else{
        cout<<n2<<" is not a Armstrong number";
    }    
    
    
}