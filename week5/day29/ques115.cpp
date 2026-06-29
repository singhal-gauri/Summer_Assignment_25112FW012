#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int choice;

    do {
        cout << "\n===== MENU DRIVEN STRING OPERATION SYSTEM =====\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length of String\n";
        cout << "4. Reverse String\n";
        cout << "5. Convert to Uppercase\n";
        cout << "6. Convert to Lowercase\n";
        cout << "7. Exit\n";
        cout << "--------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                getline(cin, str);
                break;

            case 2:
                cout << "String: " << str << endl;
                break;

            case 3:
                cout << "Length of string = " << str.length() << endl;
                break;

            case 4:
                {
                    string rev = str;
                    int n = rev.length();

                    for (int i = 0; i < n / 2; i++) {
                        char temp = rev[i];
                        rev[i] = rev[n - 1 - i];
                        rev[n - 1 - i] = temp;
                    }

                    cout << "Reversed String: " << rev << endl;
                }
                break;

            case 5:
                for (int i = 0; i < str.length(); i++) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                cout << "Uppercase String: " << str << endl;
                break;

            case 6:
                for (int i = 0; i < str.length(); i++) {
                    if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }
                cout << "Lowercase String: " << str << endl;
                break;

            case 7:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}