#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ele;
    cout<<"Enter element to search: ";
    cin>>ele;
    int high=n-1;
    int low=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==ele){
            cout<<ele<<" is found at "<<mid<<" index";
            return 0;
        }
        else if(arr[mid]>ele){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    } 
    cout<<"Element not found..." ; 
}