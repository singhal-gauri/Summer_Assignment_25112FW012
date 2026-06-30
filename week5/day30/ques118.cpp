#include <iostream>
#include <string>
using namespace std;

int main() {
    int MAX = 100;

    int bookId[MAX];
    string title[MAX];
    string author[MAX];
    bool issued[MAX];

    int count = 0;
    int choice;

    do {
        cout << "\n===== MINI LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout <<"-------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count == MAX) {
                cout << "Library is Full!\n";
            } else {
                cout << "Enter Book ID: ";
                cin >> bookId[count];

                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, title[count]);

                cout << "Enter Author Name: ";
                getline(cin, author[count]);

                issued[count] = false;
                count++;

                cout << "Book Added Successfully!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "No Books Available!\n";
            } else {
                cout << "\n----- Library Books -----\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nBook " << i + 1 << endl;
                    cout << "Book ID : " << bookId[i] << endl;
                    cout << "Title   : " << title[i] << endl;
                    cout << "Author  : " << author[i] << endl;

                    if (issued[i])
                        cout << "Status  : Issued\n";
                    else
                        cout << "Status  : Available\n";
                }
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Search: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (bookId[i] == id) {
                    cout << "\nBook Found!\n";
                    cout << "Book ID : " << bookId[i] << endl;
                    cout << "Title   : " << title[i] << endl;
                    cout << "Author  : " << author[i] << endl;

                    if (issued[i])
                        cout << "Status  : Issued\n";
                    else
                        cout << "Status  : Available\n";

                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (bookId[i] == id) {
                    found = true;

                    if (issued[i])
                        cout << "Book is Already Issued!\n";
                    else {
                        issued[i] = true;
                        cout << "Book Issued Successfully!\n";
                    }

                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (bookId[i] == id) {
                    found = true;

                    if (!issued[i])
                        cout << "Book is Already Available!\n";
                    else {
                        issued[i] = false;
                        cout << "Book Returned Successfully!\n";
                    }

                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 6:
            cout << "Thank You for Using the Library System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}