#include<iostream>
using namespace std;

struct Student{
    int rollno;
    string name;
    int age;
    float marks;
};

int main(){
    Student s[100];
    int n=0;
    int choice;

    while(true){
        cout<<"======Student Record Management System======\n";
        cout<<"1. Add student"<<endl;
        cout << "2. Display Students"<<endl;
        cout << "3. Search Student"<<endl;
        cout << "4. Update Student"<<endl;
        cout << "5. Delete Student"<<endl;
        cout << "6. Exit"<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice==1){
            cout<<"Enter Rollno. : ";
            cin>>s[n].rollno;

            cout<<"Enter Name: ";
            cin>>s[n].name;

            cout<<"Enter Age: ";
            cin>>s[n].age;

            cout<<"Enter Marks: ";
            cin>>s[n].marks;

            n++;
            cout<<"Student added successfully......"<<endl;

        }

        else if(choice==2){
            if (n==0) {
                cout <<"No records found...."<<endl;
            } else {
                for (int i = 0; i < n; i++) {
                    cout<<"\nStudent "<< i + 1<< endl;
                    cout<<"Roll No: "<< s[i].rollno<< endl;
                    cout<<"Name: "<<s[i].name<<endl;
                    cout<<"Age: "<<s[i].age<<endl;
                    cout<<"Marks: "<<s[i].marks<<endl;
                }
            }
        }

        else if(choice==3){
            int roll;
            bool found = false;
            cout<<"Enter Roll Number to search: ";
            cin >> roll;
            for (int i = 0; i < n; i++) {
                if (s[i].rollno == roll) {
                    cout << "\nStudent Found\n";
                    cout << "Roll No: " << s[i].rollno << endl;
                    cout << "Name: " << s[i].name << endl;
                    cout << "Age: " << s[i].age << endl;
                    cout << "Marks: " << s[i].marks << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found........"<<endl;
        }

        else if (choice == 4) {
            int roll;
            bool found = false;
            cout << "Enter Roll Number to update: ";
            cin >> roll;

            for (int i = 0; i < n; i++) {
                if (s[i].rollno == roll) {
                    cout << "Enter New Name: ";
                    cin >> s[i].name;

                    cout << "Enter New Age: ";
                    cin >> s[i].age;

                    cout << "Enter New Marks: ";
                    cin >> s[i].marks;

                    cout << "Record updated successfully.....\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found......\n";
        }

         else if (choice == 5) {
            int roll;
            bool found = false;
            cout << "Enter Roll Number to delete: ";
            cin >> roll;
            for (int i = 0; i < n; i++) {
                if (s[i].rollno == roll) {
                    for (int j = i; j < n - 1; j++) {
                        s[j] = s[j + 1];
                    }

                    n--;
                    cout << "Record deleted successfully......\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student not found.......\n";
        }

        else if (choice == 6) {
            cout <<"Thank you!!!!!!\n";
            break;
        }

        else {
            cout <<"Invalid choice......\n";
        }
    }

    return 0;

    
}