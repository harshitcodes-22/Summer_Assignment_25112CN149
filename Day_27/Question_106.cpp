#include <iostream>
using namespace std;

struct Employee {
    int empId;
    string name;
    float salary;
};

int main() {
    Employee emp[5];
    int n;

    cout << "===== Employee Management System =====" << endl;
    cout << "Enter the number of employees (Max 5): ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        cout << "Employee ID: ";
        cin >> emp[i].empId;
        cout << "Name: ";
        cin >> emp[i].name;
        cout << "Salary: ";
        cin >> emp[i].salary;
    }
    cout << "\n===== Employee Records =====" << endl;
    cout << "ID\tName\tSalary" << endl;

    for (int i = 0; i < n; i++) {
        cout << emp[i].empId << "\t"
             << emp[i].name << "\t"
             << emp[i].salary << endl;
    }

    return 0;
}