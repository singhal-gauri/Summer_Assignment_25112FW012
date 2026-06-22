#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter a string: ";
    getline(cin,s);
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]==' ') count++;
    } 

    cout<<"The no. of words in sentence= "<<count+1;

}