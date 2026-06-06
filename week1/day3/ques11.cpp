#include <iostream>
using namespace std;

int gcd(int x, int y) {
    while (y != 0) {
        int rem = x % y;
        x = y;
        y = rem;
    }
    return x;
}

int main() {
    int x, y;
    cout << "Enter any two numbers: ";
    cin >> x >> y;

    cout << "GCD of " << x << " and " << y << " is : " << gcd(x,y) << endl;
    return 0; 
}