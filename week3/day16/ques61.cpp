#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int last=arr[n-1];
    int total=(1+last)*(last)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Missing number: "<<total-sum;
}