#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int mat[n][n];
    int sum=0;

    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >>mat[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) {
            sum=sum+mat[i][i];
    }

    cout<<"Diagonal sum: "<<sum;
    return 0;
}
