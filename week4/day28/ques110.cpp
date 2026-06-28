#include <iostream>
#include <string>
using namespace std;

class Bank {
public:
    int accountNo;
    string name;
    float balance;
};

int main() {
    Bank account[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Update Account Holder Name\n";
        cout << "6. Delete Account\n";
        cout << "7. Exit\n";
        cout<<"----------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            if(count < 100) {
                cout << "Enter Account Number: ";
                cin >> account[count].accountNo;

                cin.ignore();

                cout << "Enter Account Holder Name: ";
                getline(cin, account[count].name);

                cout << "Enter Initial Balance: ";
                cin >> account[count].balance;

                count++;
                cout << "Account Created Successfully.\n";
            }
            else {
                cout << "Bank Database is Full.\n";
            }
            break;

        case 2:
            if(count == 0) {
                cout << "No Accounts Found.\n";
            }
            else {
                cout << "\n----- Account Details -----\n";
                for(int i = 0; i < count; i++) {
                    cout << "\nAccount " << i + 1 << endl;
                    cout << "Account Number : " << account[i].accountNo << endl;
                    cout << "Account Holder : " << account[i].name << endl;
                    cout << "Balance        : " << account[i].balance << endl;
                }
            }
            break;

        case 3:
        {
            int acc;
            float amount;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> acc;

            for(int i = 0; i < count; i++) {
                if(account[i].accountNo == acc) {
                    cout << "Enter Amount to Deposit: ";
                    cin >> amount;

                    account[i].balance += amount;

                    cout << "Deposit Successful.\n";
                    cout << "Current Balance: " << account[i].balance << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Account Not Found.\n";

            break;
        }

        case 4:
        {
            int acc;
            float amount;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> acc;

            for(int i = 0; i < count; i++) {
                if(account[i].accountNo == acc) {

                    cout << "Enter Amount to Withdraw: ";
                    cin >> amount;

                    if(amount <= account[i].balance) {
                        account[i].balance -= amount;
                        cout << "Withdrawal Successful.\n";
                        cout << "Current Balance: " << account[i].balance << endl;
                    }
                    else {
                        cout << "Insufficient Balance.\n";
                    }

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Account Not Found.\n";

            break;
        }

        case 5:
        {
            int acc;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> acc;
            cin.ignore();

            for(int i = 0; i < count; i++) {
                if(account[i].accountNo == acc) {

                    cout << "Enter New Account Holder Name: ";
                    getline(cin, account[i].name);

                    cout << "Account Updated Successfully.\n";

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Account Not Found.\n";

            break;
        }

        case 6:
        {
            int acc;
            bool found = false;

            cout << "Enter Account Number to Delete: ";
            cin >> acc;

            for(int i = 0; i < count; i++) {
                if(account[i].accountNo == acc) {

                    for(int j = i; j < count - 1; j++) {
                        account[j] = account[j + 1];
                    }

                    count--;
                    cout << "Account Deleted Successfully.\n";

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Account Not Found.\n";

            break;
        }

        case 7:
            cout << "Thank You for Using Bank Account System.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while(choice != 7);

    return 0;
}