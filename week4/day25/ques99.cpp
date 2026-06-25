#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of names: ";
    cin>>n;

    string names[n];
    cout<<"Enter names: ";
    for(int i=0;i<n;i++){
        cin>>names[i];
    }

    sort(names,names+n);
    cout<<"Names in alphabetical order: ";
    for(int i=0;i<n;i++){
        cout<<names[i]<<" ";
    }
}