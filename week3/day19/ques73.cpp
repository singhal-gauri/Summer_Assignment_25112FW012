#include<iostream>
using namespace std;
int main(){
    int r;
    int c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of column: ";
    cin>>c;
    int mat1[r][c] ,mat2[r][c] , mat3[r][c];
    cout<<"Enter elements of matrix1: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat1[i][j];
        }
    }

    cout<<"Enter elements of matrix2: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat2[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mat3[i][j]=mat1[i][j] + mat2[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }


}