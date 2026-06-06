#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n: ";
    cin>>n;
    for(int i=1;i<=10;i++){
        int mul=n*i;
        cout<<n<<"x"<<i<<"="<<mul<<endl;
    }

}