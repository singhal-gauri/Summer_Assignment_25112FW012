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

    bool symmetric=true;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(mat[i][j] != mat[j][i]){
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric) cout<<"Mat is symmetric matrix...";
    else cout<<"Mat is not symmetric matrix...";
}