#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
     if(n==1){
        cout<<0;
        return 0;
     }

     if(n==2){
        cout<<1;
        return 0;
     }
      int a=0;
      int b=1;
      for(int i=3;i<=n;i++){
        int  next=a+b;
        a=b;
        b=next;
      }
    cout<<"the "<<n<<"th term of fibonacci series is "<<b;      
}