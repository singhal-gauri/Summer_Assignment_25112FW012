#include <iostream>
#include <string>
using namespace std;

class Contact {
public:
    int id;
    string name;
    string phone;
    string email;
};

int main() {
    Contact contact[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Update Contact\n";
        cout << "5. Delete Contact\n";
        cout << "6. Exit\n";
        cout<<"-----------------------------\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            if(count < 100) {

                cout << "Enter Contact ID: ";
                cin >> contact[count].id;
                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, contact[count].name);

                cout << "Enter Phone Number: ";
                getline(cin, contact[count].phone);

                cout << "Enter Email: ";
                getline(cin, contact[count].email);

                count++;

                cout << "Contact Added Successfully.\n";
            }
            else {
                cout << "Contact List is Full.\n";
            }
            break;

        case 2:
            if(count == 0) {
                cout << "No Contacts Available.\n";
            }
            else {
                cout << "\n----- Contact List -----\n";
                for(int i = 0; i < count; i++) {
                    cout << "\nContact " << i + 1 << endl;
                    cout << "ID     : " << contact[i].id << endl;
                    cout << "Name   : " << contact[i].name << endl;
                    cout << "Phone  : " << contact[i].phone << endl;
                    cout << "Email  : " << contact[i].email << endl;
                }
            }
            break;

        case 3:
        {
            int id;
            bool found = false;

            cout << "Enter Contact ID: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(contact[i].id == id) {
                    cout << "\nContact Found\n";
                    cout << "ID     : " << contact[i].id << endl;
                    cout << "Name   : " << contact[i].name << endl;
                    cout << "Phone  : " << contact[i].phone << endl;
                    cout << "Email  : " << contact[i].email << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Contact Not Found.\n";

            break;
        }

        case 4:
        {
            int id;
            bool found = false;

            cout << "Enter Contact ID to Update: ";
            cin >> id;
            cin.ignore();

            for(int i = 0; i < count; i++) {
                if(contact[i].id == id) {

                    cout << "Enter New Name: ";
                    getline(cin, contact[i].name);

                    cout << "Enter New Phone Number: ";
                    getline(cin, contact[i].phone);

                    cout << "Enter New Email: ";
                    getline(cin, contact[i].email);

                    cout << "Contact Updated Successfully.\n";

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Contact Not Found.\n";

            break;
        }

        case 5:
        {
            int id;
            bool found = false;

            cout << "Enter Contact ID to Delete: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(contact[i].id == id) {

                    for(int j = i; j < count - 1; j++) {
                        contact[j] = contact[j + 1];
                    }

                    count--;

                    cout << "Contact Deleted Successfully.\n";

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Contact Not Found.\n";

            break;
        }

        case 6:
            cout << "Thank You for Using Contact Management System.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while(choice != 6);

    return 0;
}