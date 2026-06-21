#include <iostream>
using namespace std;

int main() {
    char str[] = "hello";
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    int left = 0, right = n - 1;

    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }

    cout << str;

    return 0;
}