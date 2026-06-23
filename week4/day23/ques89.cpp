#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int n=s.length();
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    for(int i=0;i<n;i++){
        if(mp[s[i]]==1){
            cout<<"The first non repeating character= "<<s[i];
            return 0;
        }
    }

    cout<<"No non repeating character..";

        
    }

