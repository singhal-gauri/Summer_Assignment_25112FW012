#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0;
    int b=1;
    int next;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    fibonacci(n);

    return 0;
}