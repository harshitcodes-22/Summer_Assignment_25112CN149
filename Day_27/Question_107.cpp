#include <iostream>
using namespace std;

int main() {
    int empId;
    string name;
    float basicSalary, allowance, deduction, netSalary;

    cout << "===== Salary Management System =====" << endl;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter Allowance: ";
    cin >> allowance;

    cout << "Enter Deduction: ";
    cin >> deduction;

    netSalary = basicSalary + allowance - deduction;

    cout << "\n===== Salary Details =====" << endl;
    cout << "Employee ID   : " << empId << endl;
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "Allowance     : " << allowance << endl;
    cout << "Deduction     : " << deduction << endl;
    cout << "Net Salary    : " << netSalary << endl;

    return 0;
}
