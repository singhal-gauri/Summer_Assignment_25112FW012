#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,4};
    int arr2[]={1,4,6,8,9,4};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    map<int,int> mp;
    for(int i=0;i<n1;i++){
        mp[arr1[i]]=1;
    }
    for(int i=0;i<n2;i++){
        if(mp.find(arr2[i]) != mp.end()){
            cout<<arr2[i]<<" ";
            mp.erase(arr2[i]);
        }
    }

   
}