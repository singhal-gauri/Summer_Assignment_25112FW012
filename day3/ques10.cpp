#include <bits/stdc++.h>
using namespace std;

bool primeNumber(int n) {
    if (n <= 1) {
        return false;
    }
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    return count == 2;
}

int main() {
    vector<int> temp;
    int st, end;
    cout << "Enter the start and end of the range: ";
    cin >> st >> end;
    for (int i = st; i <= end; i++) {
        if (primeNumber(i)) {
            temp.push_back(i);
        }
    }
    for (int x: temp) {
        cout << x << " ";
    }
    return 0;
}