#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ele;
    cout<<"enter the element you want to search: ";
    cin>>ele;
    for(int i=0;i<n;i++){
        if(ele==arr[i]){
            cout<<"Element "<<ele<<" is present at "<<i<<" index";
            break;
        }
        else{
            cout<<"Element is not present";
            break;
        }
    }

    
}