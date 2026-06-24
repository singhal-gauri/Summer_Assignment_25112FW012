#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a sentence: ";
    getline(cin,s);

    string word="";
    string longestword="";
    int n=s.length();
    for(int i=0;i<=n;i++){
        if(i==n || s[i]==' '){
            if(word.length()> longestword.length()){
                longestword=word;
            }
            word="";
        }
        else{
            word=word+s[i];
        }
    }
    cout<<"The longest word in sentence: "<<longestword;
}
