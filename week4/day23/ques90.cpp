#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int n=s.length();
    map<char,int> mp;
    for(int i=0;i<n;i++){
        if(mp.find(s[i]) != mp.end()){
            cout<<"The first repeating character= "<<s[i];
            return 0;

        }
        mp[s[i]]++;
    }
    cout<<"No repeating characters found...";
}
