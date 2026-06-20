#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of matrix: ";
    cin>>n;
    int mat[n][n];
    cout<<"Enter elements of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+mat[j][i];
        }
        cout<<"The sum of column "<<i+1<<" = "<<sum;
        cout<<endl;
    }
}