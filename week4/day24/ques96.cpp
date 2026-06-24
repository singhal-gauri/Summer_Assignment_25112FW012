#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int n=s.length();
    
    int freq[26]={0};
    string result="";

    for(int i=0;i<n;i++){
        int index=s[i]-'a';
        if(freq[index]==0){
            result=result +s[i];
            freq[index]++;
        }
    }
    cout<<"The new string= "<<result;

}