#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Product product[100];
    int n = 0;
    int choice, id, i;
    bool found;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Product\n";
        cout << "5. Delete Product\n";
        cout << "6. Exit\n";
        cout << "---------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Product ID: ";
            cin >> product[n].id;
            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, product[n].name);

            cout << "Enter Quantity: ";
            cin >> product[n].quantity;

            cout << "Enter Price: ";
            cin >> product[n].price;

            n++;
            cout << "Product Added Successfully.\n";
            break;

        case 2:
            if (n == 0) {
                cout << "No products available.\n";
            } else {
                cout << "\nID\tName\t\tQuantity\tPrice\n";
                for (i = 0; i < n; i++) {
                    cout << product[i].id << "\t"
                         << product[i].name << "\t\t"
                         << product[i].quantity << "\t\t"
                         << product[i].price << endl;
                }
            }
            break;

        case 3:
            cout << "Enter Product ID to search: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++) {
                if (product[i].id == id) {
                    cout << "\nProduct Found\n";
                    cout << "ID: " << product[i].id << endl;
                    cout << "Name: " << product[i].name << endl;
                    cout << "Quantity: " << product[i].quantity << endl;
                    cout << "Price: " << product[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product not found.\n";
            break;

        case 4:
            cout << "Enter Product ID to update: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++) {
                if (product[i].id == id) {
                    cin.ignore();
                    cout << "Enter New Product Name: ";
                    getline(cin, product[i].name);

                    cout << "Enter New Quantity: ";
                    cin >> product[i].quantity;

                    cout << "Enter New Price: ";
                    cin >> product[i].price;

                    cout << "Product Updated Successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Product not found.\n";
            break;

        case 5:
            cout << "Enter Product ID to delete: ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++) {
                if (product[i].id == id) {
                    for (int j = i; j < n - 1; j++) {
                        product[j] = product[j + 1];
                    }
                    n--;
                    found = true;
                    cout << "Product Deleted Successfully.\n";
                    break;
                }
            }

            if (!found)
                cout << "Product not found.\n";
            break;

        case 6:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}