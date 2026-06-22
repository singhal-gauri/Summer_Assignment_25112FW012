#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    int n =s.length();
    int j=0;
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            s[j]=s[i];
            j++;
        }
    }

    s.resize(j);

    cout<<"String after removing spaces: "<<s;
}