#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,2,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int min=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}