#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,3,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int j=target-arr[i];
        if(mp.find(j) != mp.end()){
            cout<<arr[i]<<" "<<j;
            return 0;
        }
        mp[arr[i]]=1;
    }
    cout<<"no pair found";
}