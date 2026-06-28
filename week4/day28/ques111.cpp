#include <iostream>
#include <string>
using namespace std;

class Ticket {
public:
    int ticketNo;
    string name;
    string destination;
    int seatNo;
};

int main() {
    Ticket booking[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== TICKET BOOKING SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display All Bookings\n";
        cout << "3. Search Booking\n";
        cout << "4. Update Passenger Name\n";
        cout << "5. Cancel Ticket\n";
        cout << "6. Exit\n";
        cout<<"-------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            if(count < 100) {

                cout << "Enter Ticket Number: ";
                cin >> booking[count].ticketNo;

                cin.ignore();

                cout << "Enter Passenger Name: ";
                getline(cin, booking[count].name);

                cout << "Enter Destination: ";
                getline(cin, booking[count].destination);

                cout << "Enter Seat Number: ";
                cin >> booking[count].seatNo;

                count++;

                cout << "Ticket Booked Successfully.\n";
            }
            else {
                cout << "Booking Limit Reached.\n";
            }
            break;

        case 2:
            if(count == 0) {
                cout << "No Bookings Available.\n";
            }
            else {
                cout << "\n----- Booking Details -----\n";
                for(int i = 0; i < count; i++) {
                    cout << "\nBooking " << i + 1 << endl;
                    cout << "Ticket Number : " << booking[i].ticketNo << endl;
                    cout << "Passenger Name: " << booking[i].name << endl;
                    cout << "Destination   : " << booking[i].destination << endl;
                    cout << "Seat Number   : " << booking[i].seatNo << endl;
                }
            }
            break;

        case 3:
        {
            int ticket;
            bool found = false;

            cout << "Enter Ticket Number: ";
            cin >> ticket;

            for(int i = 0; i < count; i++) {
                if(booking[i].ticketNo == ticket) {

                    cout << "\nTicket Found\n";
                    cout << "Ticket Number : " << booking[i].ticketNo << endl;
                    cout << "Passenger Name: " << booking[i].name << endl;
                    cout << "Destination   : " << booking[i].destination << endl;
                    cout << "Seat Number   : " << booking[i].seatNo << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Ticket Not Found.\n";

            break;
        }

        case 4:
        {
            int ticket;
            bool found = false;

            cout << "Enter Ticket Number: ";
            cin >> ticket;
            cin.ignore();

            for(int i = 0; i < count; i++) {
                if(booking[i].ticketNo == ticket) {

                    cout << "Enter New Passenger Name: ";
                    getline(cin, booking[i].name);

                    cout << "Passenger Name Updated Successfully.\n";

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Ticket Not Found.\n";

            break;
        }

        case 5:
        {
            int ticket;
            bool found = false;

            cout << "Enter Ticket Number to Cancel: ";
            cin >> ticket;

            for(int i = 0; i < count; i++) {
                if(booking[i].ticketNo == ticket) {

                    for(int j = i; j < count - 1; j++) {
                        booking[j] = booking[j + 1];
                    }

                    count--;

                    cout << "Ticket Cancelled Successfully.\n";

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Ticket Not Found.\n";

            break;
        }

        case 6:
            cout << "Thank You for Using Ticket Booking System.\n";
            break;

        default:
            cout << "Invalid Choice.\n";
        }

    } while(choice != 6);

    return 0;
}