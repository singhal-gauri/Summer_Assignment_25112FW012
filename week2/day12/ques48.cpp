#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum=sum+ i;
        }
    }

    return sum == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPerfect(n)) {
        cout << "Perfect number";
    }
    else {
        cout << "Not a perfect number";
    }

    return 0;
}