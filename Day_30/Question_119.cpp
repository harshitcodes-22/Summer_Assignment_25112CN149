#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId[5];
    string empName[5];
    string department[5];
    float salary[5];

public:
    void addEmployee()
    {
        cout << "Enter details of 5 employees:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "\nEmployee " << i + 1 << endl;

            cout << "Enter Employee ID: ";
            cin >> empId[i];

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, empName[i]);

            cout << "Enter Department: ";
            getline(cin, department[i]);

            cout << "Enter Salary: ";
            cin >> salary[i];
        }
    }

    void displayEmployee()
    {
        cout << "\nEmployee Records\n";
        cout << "\n";
        cout << "ID\tName\t\tDepartment\tSalary\n";
        cout << "\n";

        for (int i = 0; i < 5; i++)
        {
            cout << empId[i] << "\t"
                 << empName[i] << "\t\t"
                 << department[i] << "\t\t"
                 << salary[i] << endl;
        }
    }
};

int main()
{
    Employee emp;

    emp.addEmployee();
    emp.displayEmployee();

    return 0;
}