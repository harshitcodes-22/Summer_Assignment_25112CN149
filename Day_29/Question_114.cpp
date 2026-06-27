#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[100], n;

public:
    void inputArray() {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void displayMenu() {
        int choice, key;

        do {
            cout << "\n----- MENU -----\n";
            cout << "1. Display Array\n";
            cout << "2. Search Element\n";
            cout << "3. Find Largest Element\n";
            cout << "4. Find Smallest Element\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Array Elements: ";
                    for (int i = 0; i < n; i++)
                        cout << arr[i] << " ";
                    cout << endl;
                    break;

                case 2:
                    cout << "Enter element to search: ";
                    cin >> key;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == key) {
                            cout << "Element found at position " << i + 1 << endl;
                            break;
                        }
                        if (i == n - 1)
                            cout << "Element not found.\n";
                    }
                    break;

                case 3: {
                    int max = arr[0];
                    for (int i = 1; i < n; i++)
                        if (arr[i] > max)
                            max = arr[i];
                    cout << "Largest element = " << max << endl;
                    break;
                }

                case 4: {
                    int min = arr[0];
                    for (int i = 1; i < n; i++)
                        if (arr[i] < min)
                            min = arr[i];
                    cout << "Smallest element = " << min << endl;
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
    ArrayOperations obj;
    obj.inputArray();
    obj.displayMenu();

    return 0;
}