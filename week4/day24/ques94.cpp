#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;

    string compressed="";
    int count=1;
    int n=s.length();

    for(int i=0;i<n;i++){
        if(i<n-1 && s[i]==s[i+1]){
            count++;
        }
        else{
            compressed=compressed+ s[i];
            compressed+= to_string(count);
            count=1;
        }
    }

    cout<<"The compressed string= "<<compressed;
}