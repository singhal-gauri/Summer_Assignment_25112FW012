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

int lcm(int x, int y) {
    return (x * y) / gcd(x, y);
}

int main() {
    int x, y;
    cout << "Enter any two numbers: ";
    cin >> x >> y;

    cout << "LCM of " << x << " and " << y << " is : " << lcm(x,y) << endl;
    return 0; 
}