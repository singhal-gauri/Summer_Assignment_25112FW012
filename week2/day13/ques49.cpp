#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of terms: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" terms: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}