#include <iostream>
#include <string>
using namespace std;

int main() {
    int MAX = 100;

    int roll[MAX];
    string name[MAX];
    string course[MAX];
    float marks[MAX];

    int count = 0;
    int choice;

    do {
        cout << "\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student Record\n";
        cout << "5. Delete Student Record\n";
        cout << "6. Exit\n";
        cout<<"--------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count >= MAX) {
                cout << "Record is Full!\n";
            } else {
                cout << "\nEnter Roll Number: ";
                cin >> roll[count];

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, name[count]);

                cout << "Enter Course: ";
                getline(cin, course[count]);

                cout << "Enter Marks: ";
                cin >> marks[count];

                count++;
                cout << "Student Record Added Successfully!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "No Records Found!\n";
            } else {
                cout << "\n------ Student Records ------\n";
                for (int i = 0; i < count; i++) {
                    cout << "\nStudent " << i + 1 << endl;
                    cout << "Roll Number : " << roll[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Course      : " << course[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;
                }
            }
            break;

        case 3: {
            int r, found = 0;
            cout << "Enter Roll Number to Search: ";
            cin >> r;

            for (int i = 0; i < count; i++) {
                if (roll[i] == r) {
                    cout << "\nRecord Found!\n";
                    cout << "Roll Number : " << roll[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Course      : " << course[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Student Record Not Found!\n";
            break;
        }

        case 4: {
            int r, found = 0;
            cout << "Enter Roll Number to Update: ";
            cin >> r;

            for (int i = 0; i < count; i++) {
                if (roll[i] == r) {

                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, name[i]);

                    cout << "Enter New Course: ";
                    getline(cin, course[i]);

                    cout << "Enter New Marks: ";
                    cin >> marks[i];

                    cout << "Record Updated Successfully!\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Student Record Not Found!\n";

            break;
        }

        case 5: {
            int r, found = 0;
            cout << "Enter Roll Number to Delete: ";
            cin >> r;

            for (int i = 0; i < count; i++) {
                if (roll[i] == r) {

                    for (int j = i; j < count - 1; j++) {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        course[j] = course[j + 1];
                        marks[j] = marks[j + 1];
                    }

                    count--;
                    cout << "Record Deleted Successfully!\n";
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Student Record Not Found!\n";

            break;
        }

        case 6:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}