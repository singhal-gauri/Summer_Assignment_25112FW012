#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"Even number of elements: "<<even_count;
    cout<<endl;
    cout<<"Odd number of elements: "<<odd_count;
}