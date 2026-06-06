#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary;
    cout<<"enter binary number: ";
    cin >> binary;

    int decimal = 0, power = 0;

    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * pow(2, power);
        power++;
        binary /= 10;
    }

    cout << "Decimal = " << decimal;

    return 0;
}