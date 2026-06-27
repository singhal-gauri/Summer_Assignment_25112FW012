#include <iostream>
using namespace std;

struct Employee
{
    int employeeId;
    string employeeName;
    float salary;
    float bonus;
    float totalSalary;
};

int main()
{
    Employee employees[100];
    int totalEmployees = 0;
    int choice;

    do
    {
        cout << "===== Salary Management System ====="<<endl;
        cout << "1. Add Employee Details"<<endl;
        cout << "2. Display Employee Details"<<endl;
        cout << "3. Update Employee Details"<<endl;
        cout << "4. Exit"<<endl;
        cout<<"----------------------------------"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter number of employees to add: ";
            cin >> totalEmployees;
            for (int i = 0; i < totalEmployees; i++)
            {
                cout << "\nEmployee " << i + 1 << endl;

                cout << "Employee ID: ";
                cin >> employees[i].employeeId;

                cout << "Employee Name: ";
                cin >> employees[i].employeeName;

                cout << "Salary: ";
                cin >> employees[i].salary;

                cout << "Bonus: ";
                cin >> employees[i].bonus;

                employees[i].totalSalary =
                    employees[i].salary + employees[i].bonus;
            }
            break;

        case 2:
            if (totalEmployees == 0)
            {
                cout << "No employee records found.......\n";
            }
            else
            {
                cout << "\n====== Employee Details ======\n";

                for (int i=0;i<totalEmployees;i++)
                {
                    cout << "\nEmployee ID   : " << employees[i].employeeId;
                    cout << "\nEmployee Name : " << employees[i].employeeName;
                    cout << "\nSalary        : " << employees[i].salary;
                    cout << "\nBonus         : " << employees[i].bonus;
                    cout << "\nTotal Salary  : " << employees[i].totalSalary;
                    cout<<endl;
                }
            }
            break;

        case 3:
        {
            int id;
            cout << "Enter Employee ID to update: ";
            cin >> id;
            bool found = false;

            for (int i = 0; i < totalEmployees; i++)
            {
                if (employees[i].employeeId == id)
                {
                    cout << "Enter New Salary: ";
                    cin >> employees[i].salary;

                    cout << "Enter New Bonus: ";
                    cin >> employees[i].bonus;

                    employees[i].totalSalary =
                        employees[i].salary + employees[i].bonus;

                    cout << "Employee details updated successfully.......\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Employee ID not found......\n";
            }
            break;
        }

        case 4:
            cout << "Thank You..........\n";
            break;

        default:
            cout << "Invalid Choice........\n";
        }

    } while (choice != 4);

    return 0;
}