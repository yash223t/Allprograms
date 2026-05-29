#include <iostream>
#include <string>

using namespace std;

class Product {

public:
    int productID;
    string productName;
    int quantity;
    float price;

    void addProduct() {

        cout << "\nEnter Product ID: ";
        cin >> productID;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayProduct() {

        cout << "\n-----------------------------";
        cout << "\nProduct ID: " << productID;
        cout << "\nProduct Name: " << productName;
        cout << "\nQuantity: " << quantity;
        cout << "\nPrice: ₹" << price;
        cout << "\n-----------------------------\n";
    }
};

int main() {

    Product products[100];

    int count = 0;
    int choice;

    do {

        cout << "\n====== INVENTORY MANAGEMENT SYSTEM ======\n";

        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:

                if(count < 100) {

                    products[count].addProduct();
                    count++;

                    cout << "\nProduct Added Successfully!\n";

                } else {

                    cout << "\nInventory Full!\n";
                }

                break;

            case 2:

                if(count == 0) {

                    cout << "\nNo Products Available!\n";

                } else {

                    cout << "\n===== PRODUCT LIST =====\n";

                    for(int i = 0; i < count; i++) {

                        products[i].displayProduct();
                    }
                }

                break;

            case 3: {

                int searchID;
                bool found = false;

                cout << "\nEnter Product ID to Search: ";
                cin >> searchID;

                for(int i = 0; i < count; i++) {

                    if(products[i].productID == searchID) {

                        cout << "\nProduct Found!\n";

                        products[i].displayProduct();

                        found = true;
                        break;
                    }
                }

                if(!found) {

                    cout << "\nProduct Not Found!\n";
                }

                break;
            }

            case 4:

                cout << "\nExiting Program...\n";
                break;

            default:

                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}
