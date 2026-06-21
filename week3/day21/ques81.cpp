#include<iostream>
using namespace std;
 int main(){
    char s[]="abcdefgh";
    int count=0;
    
    while(s[count] != '\0'){
        count++;
    }
    cout<<"Length of string= "<<count;

 }