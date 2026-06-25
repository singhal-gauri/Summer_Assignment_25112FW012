#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of words: ";
    cin>>n;

    cout<<"Enter the words: ";
    string word[n];
    for(int i=0;i<n;i++){
        cin>>word[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(word[i].length() > word[j].length()){
                swap(word[i],word[j]);
            }
        }
    }

    cout<<"Name in order of length: ";
    for(int i=0;i<n;i++){
        cout<<word[i]<<" ";
    }
}