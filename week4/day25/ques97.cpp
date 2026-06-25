#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"Enter no. of elements in array1: ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter elements of array1 in sorted order: ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    int n2;
    cout<<"Enter no. of elements in array2: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter elements of array2 in sorted order: ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    
    int arr3[n1+n2];
    int j=0;
    int i=0;
    int k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }

    while(i<n1){
        arr3[k++]=arr1[i++];
    }
    while(j<n2){
        arr3[k++]=arr2[j++];
    }

    cout<<"Merged sorted array: ";
    for(int i=0;i<(n1+n2);i++){
        cout<<arr3[i]<<" ";
    }

}