#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;
    int value, position;
    int i;

    cout << "Enter the size of the array: ";
    cin >> n;

    do {
        cout << "\n===== MENU DRIVEN ARRAY OPERATION SYSTEM =====\n";
        cout << "1. Enter Array Elements\n";
        cout << "2. Display Array\n";
        cout << "3. Search an Element\n";
        cout << "4. Update an Element\n";
        cout << "5. Find Maximum Element\n";
        cout << "6. Find Minimum Element\n";
        cout << "7. Find Sum of Elements\n";
        cout << "8. Exit\n";
        cout<<"------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter " << n << " elements:\n";
                for (i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                break;

            case 2:
                cout << "Array Elements: ";
                for (i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 3:
                cout << "Enter element to search: ";
                cin >> value;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        cout << "Element found at index " << i << endl;
                        break;
                    }
                }
                if (i == n) {
                    cout << "Element not found.\n";
                }
                break;

            case 4:
                cout << "Enter index to update (0 to " << n - 1 << "): ";
                cin >> position;

                if (position >= 0 && position < n) {
                    cout << "Enter new value: ";
                    cin >> value;
                    arr[position] = value;
                    cout << "Element updated successfully.\n";
                } else {
                    cout << "Invalid index.\n";
                }
                break;
               

            case 5:
                value = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > value) {
                        value = arr[i];
                    }
                }
                cout << "Maximum Element = " << value << endl;
                break;

            case 6:
                value = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < value) {
                        value = arr[i];
                    }
                }
                cout << "Minimum Element = " << value << endl;
                break;

            case 7:
                value = 0;
                for (i = 0; i < n; i++) {
                    value += arr[i];
                }
                cout << "Sum of Elements = " << value << endl;
                break;

            case 8:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice! Please try again.\n";
        }

    } while (choice != 8);

    return 0;
}