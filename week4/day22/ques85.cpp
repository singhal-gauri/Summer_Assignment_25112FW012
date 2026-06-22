#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int n=s.length();
    
    bool palindrome=true;
    for(int i=0;i<n ;i++){
        if(s[i] != s[n-1-i]){
            palindrome=false;
            break;
        }
    }

    if(palindrome) cout<<"Palindrome string.";
    else cout<<"Not palindrome string.";
    return 0;
 }