#include<iostream>
using namespace std;
int reversenumber(int n,int rev=0){
    if(n==0) return rev;
    return reversenumber(n/10, rev*10 + n%10);

}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"Reverse number= "<<reversenumber(n);
}