#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    int age;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0;
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Employee\n";
        cout << "5. Delete Employee\n";
        cout << "6. Exit\n";
        cout<<"-----------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Employee ID: ";
            cin >> emp[n].id;

            cout << "Enter Name: ";
            cin >> emp[n].name;

            cout << "Enter Age: ";
            cin >> emp[n].age;

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "Employee added successfully.........\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No employee records found..........\n";
            } else {
                cout << "\nEmployee Records:\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee " << i + 1 << endl;
                    cout << "ID: " << emp[i].id << endl;
                    cout << "Name: " << emp[i].name << endl;
                    cout << "Age: " << emp[i].age << endl;
                    cout << "Salary: " << emp[i].salary << endl;
                }
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to search: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    cout << "\nEmployee Found\n";
                    cout << "ID: " << emp[i].id << endl;
                    cout << "Name: " << emp[i].name << endl;
                    cout << "Age: " << emp[i].age << endl;
                    cout << "Salary: " << emp[i].salary << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.......\n";

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to update: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    cout << "Enter New Name: ";
                    cin >> emp[i].name;

                    cout << "Enter New Age: ";
                    cin >> emp[i].age;

                    cout << "Enter New Salary: ";
                    cin >> emp[i].salary;

                    cout << "Employee record updated successfully.......\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.............\n";

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Employee ID to delete: ";
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (emp[i].id == id) {
                    for (int j = i; j < n - 1; j++) {
                        emp[j] = emp[j + 1];
                    }
                    n--;
                    cout << "Employee record deleted successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Employee not found.\n";

            break;
        }

        case 6:
            cout << "Exiting program.........\n";
            break;

        default:
            cout << "Invalid choice..........\n";
        }

    } while (choice != 6);

    return 0;
}