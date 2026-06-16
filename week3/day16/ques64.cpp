#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,3,3,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    for(int k=0;k<=j;k++){
        cout<<arr[k]<<" ";
    }
}