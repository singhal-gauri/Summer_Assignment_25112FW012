#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    map<char,int> mp;
    int n=s.length();
    int maxfreq=0;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        maxfreq=max(maxfreq,mp[s[i]]);
    }

    for(auto it: mp){
        if(it.second == maxfreq){
            cout<<"Maximum occuring character= "<<it.first;
            return 0;
        }
    }
}