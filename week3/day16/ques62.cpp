#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,2,1,4,2,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    map<int,int> mp;
    int element;
    for(int i=0;i<n;i++){
        if(mp.find(arr[i]) != mp.end()){
            mp[arr[i]]++;
            if(mp[arr[i]]> count){
                count=mp[arr[i]];
                element=arr[i];
            } 
        }
        else{
            mp[arr[i]]=1;
        }
    }
    cout<<"Element with max frequency: "<<element;
    cout<<endl;
    cout<<"Frequency: "<<count;

}
