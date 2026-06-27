#include <iostream>
#include <string>
using namespace std;

class Ticket
{
private:
    int ticketNo;
    string passengerName;
    string destination;

public:

    void bookTicket()
    {
        cout << "Enter Ticket Number: ";
        cin >> ticketNo;
        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Destination: ";
        getline(cin, destination);
    }

    void showTicket()
    {
        cout << "\n----- Ticket Details -----" << endl;
        cout << "Ticket Number   : " << ticketNo << endl;
        cout << "Passenger Name  : " << passengerName << endl;
        cout << "Destination     : " << destination << endl;
    }
};

int main()
{
    Ticket t;

    t.bookTicket();
    t.showTicket();

    return 0;
}