#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2,5,4,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int ele;
    cout<<"Enter element: ";
    cin>>ele;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            count++;
        }
    }
    cout<<"Frequency of "<<ele<<" = "<<count;

}