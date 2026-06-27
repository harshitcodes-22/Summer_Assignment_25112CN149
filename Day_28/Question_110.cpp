#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    string name;
    float balance;

public:

    void getData()
    {
        cout << "Enter Account Number: ";
        cin >> accountNo;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, name);

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void showData()
    {
        cout << "\n----- Bank Account Details -----" << endl;
        cout << "Account Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount acc;

    acc.getData();
    acc.showData();

    return 0;
}