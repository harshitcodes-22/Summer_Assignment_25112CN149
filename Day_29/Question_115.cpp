#include <iostream>
#include <string>
using namespace std;

class StringOperations {
private:
    string str1, str2;

public:
    void inputStrings() {
        cout << "Enter first string: ";
        cin >> str1;

        cout << "Enter second string: ";
        cin >> str2;
    }

    void showMenu() {
        int choice;

        do {
            cout << "\n===== STRING OPERATIONS MENU =====\n";
            cout << "1. Find Length\n";
            cout << "2. Concatenate Strings\n";
            cout << "3. Compare Strings\n";
            cout << "4. Reverse First String\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {

            case 1:
                cout << "Length of first string = " << str1.length() << endl;
                cout << "Length of second string = " << str2.length() << endl;
                break;

            case 2:
                cout << "Concatenated string = " << str1 + str2 << endl;
                break;

            case 3:
                if (str1 == str2)
                    cout << "Strings are equal.\n";
                else
                    cout << "Strings are not equal.\n";
                break;

            case 4: {
                string rev = "";
                for (int i = str1.length() - 1; i >= 0; i--) {
                    rev += str1[i];
                }
                cout << "Reversed first string = " << rev << endl;
                break;
            }

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
            }

        } while (choice != 5);
    }
};

int main() {
    StringOperations obj;

    obj.inputStrings();   
    obj.showMenu();       

    return 0;
}