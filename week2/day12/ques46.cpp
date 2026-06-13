#include<iostream>
#include<cmath>
using namespace std;

bool isarms(int n){
    int n1=n;
    int n2=n;
    int arms=0;
    int count=0;
    

    while(n>0){
        count++ ;
        n=n/10;
    }
    while(n1>0){
        int digit=n1%10;
        arms=arms + pow(digit,count);
        n1=n1/10;
    }
    if(arms==n2){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(isarms(n)){
        cout<<"Armstrong..";
    }
    else{
        cout<<"Not armstrong..";
    }
}