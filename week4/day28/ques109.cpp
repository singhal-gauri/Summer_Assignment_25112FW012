#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool issued;
};

int main() {
    Book library[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Update Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Issue Book\n";
        cout << "7. Return Book\n";
        cout << "8. Exit\n";
        cout<<"---------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            if(count < 100) {
                cout << "Enter Book ID: ";
                cin >> library[count].id;
                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, library[count].title);

                cout << "Enter Author Name: ";
                getline(cin, library[count].author);

                library[count].issued = false;
                count++;

                cout << "Book Added Successfully..........\n";
            }
            else {
                cout << "Library is Full............\n";
            }
            break;

        case 2:
            if(count == 0) {
                cout << "No Books Available...............\n";
            }
            else {
                cout << "\nBook List\n";
                for(int i = 0; i < count; i++) {
                    cout << "\nBook " << i + 1 << endl;
                    cout << "ID: " << library[i].id << endl;
                    cout << "Title: " << library[i].title << endl;
                    cout << "Author: " << library[i].author << endl;
                    cout << "Status: ";
                    if(library[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";
                    cout << endl;
                }
            }
            break;

        case 3:
        {
            int id;
            bool found = false;
            cout << "Enter Book ID to Search: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(library[i].id == id) {
                    cout << "\nBook Found\n";
                    cout << "ID: " << library[i].id << endl;
                    cout << "Title: " << library[i].title << endl;
                    cout << "Author: " << library[i].author << endl;
                    cout << "Status: ";
                    if(library[i].issued)
                        cout << "Issued";
                    else
                        cout << "Available";
                    cout << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Book Not Found.\n";

            break;
        }

        case 4:
        {
            int id;
            bool found = false;
            cout << "Enter Book ID to Update: ";
            cin >> id;
            cin.ignore();

            for(int i = 0; i < count; i++) {
                if(library[i].id == id) {

                    cout << "Enter New Title: ";
                    getline(cin, library[i].title);

                    cout << "Enter New Author: ";
                    getline(cin, library[i].author);

                    cout << "Book Updated Successfully.\n";

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Book Not Found.\n";

            break;
        }

        case 5:
        {
            int id;
            bool found = false;
            cout << "Enter Book ID to Delete: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(library[i].id == id) {

                    for(int j = i; j < count - 1; j++) {
                        library[j] = library[j + 1];
                    }

                    count--;
                    found = true;

                    cout << "Book Deleted Successfully.\n";
                    break;
                }
            }

            if(!found)
                cout << "Book Not Found.\n";

            break;
        }

        case 6:
        {
            int id;
            bool found = false;

            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(library[i].id == id) {

                    if(!library[i].issued) {
                        library[i].issued = true;
                        cout << "Book Issued Successfully.\n";
                    }
                    else {
                        cout << "Book Already Issued.\n";
                    }

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Book Not Found.\n";

            break;
        }

        case 7:
        {
            int id;
            bool found = false;

            cout << "Enter Book ID to Return: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(library[i].id == id) {

                    if(library[i].issued) {
                        library[i].issued = false;
                        cout << "Book Returned Successfully.\n";
                    }
                    else {
                        cout << "Book is Already Available.\n";
                    }

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Book Not Found.\n";

            break;
        }

        case 8:
            cout << "Thank You for Using Library Management System.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while(choice != 8);

    return 0;
}