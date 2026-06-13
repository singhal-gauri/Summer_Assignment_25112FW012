#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 9, 1, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest element: " << largest;
    cout<<endl;
    cout << "Smallest element: " << smallest;

    return 0;
}