#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    string name;
    string phone;
    string email;

public:

    void getContact()
    {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);
    }

    void showContact()
    {
        cout << "\n----- Contact Details -----" << endl;
        cout << "Name         : " << name << endl;
        cout << "Phone Number : " << phone << endl;
        cout << "Email        : " << email << endl;
    }
};

int main()
{
    Contact c;

    c.getContact();
    c.showContact();

    return 0;
}