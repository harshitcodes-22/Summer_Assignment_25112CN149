#include <iostream>
#include <string>
using namespace std;

class Inventory {
private:
    int id[100];
    string name[100];
    float price[100];
    int quantity[100];
    int n;

public:
    void inputItems() {
        cout << "Enter number of items: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "\nEnter details of item " << i + 1 << ":\n";

            cout << "ID: ";
            cin >> id[i];

            cout << "Name: ";
            cin >> name[i];

            cout << "Price: ";
            cin >> price[i];

            cout << "Quantity: ";
            cin >> quantity[i];
        }
    }

    void displayItems() {
        cout << "\n===== INVENTORY DETAILS =====\n";
        cout << "ID\tName\tPrice\tQuantity\n";

        for (int i = 0; i < n; i++) {
            cout << id[i] << "\t"
                 << name[i] << "\t"
                 << price[i] << "\t"
                 << quantity[i] << endl;
        }
    }
};

int main() {
    Inventory obj;

    obj.inputItems();  
    obj.displayItems();  

    return 0;
}