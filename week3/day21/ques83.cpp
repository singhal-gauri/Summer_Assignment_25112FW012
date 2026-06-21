#include<iostream>
using namespace std;
int main(){
    string str;
    int vowels=0;
    int consonants=0;
    cout<<"enter a string: ";
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        char ch=tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowels++;    
        }
        else{
            consonants++;
        }
    }

    cout<<"Number of vowels= "<<vowels;
    cout<<endl;
    cout<<"Number of consonants= "<<consonants;

}