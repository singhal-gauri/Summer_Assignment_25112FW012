#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cout<<"Enter string1: ";
    cin>>s1;
    cout<<"Enter string2: ";
    cin>>s2;

    unordered_map<char,int> mp;
    for(int i=0;i<s1.length();i++){
        mp[s1[i]]=1;  
    }
    cout<<"Common characters: ";
    for(int i=0;i<s2.length();i++){
        if(mp[s2[i]]==1){
            cout<<s2[i]<<" ";
            s2[i]=2;
        }
    }

}