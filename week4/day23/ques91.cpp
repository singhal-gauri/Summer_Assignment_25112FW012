#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cout<<"Enter string 1: ";
    cin>>s1;
    cout<<"Enter string 2: ";
    cin>>s2;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1==s2){
        cout<<"Anagram strings...";
    }
    else{
        cout<<"Not anagram strings...";
    }
    
}