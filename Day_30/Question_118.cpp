#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    int bookId[5];
    string bookName[5];
    string author[5];

public:
    void addBooks()
    {
        cout << "Enter details of 5 books:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "\nBook " << i + 1 << endl;

            cout << "Enter Book ID: ";
            cin >> bookId[i];

            cin.ignore();

            cout << "Enter Book Name: ";
            getline(cin, bookName[i]);

            cout << "Enter Author Name: ";
            getline(cin, author[i]);
        }
    }

    void displayBooks()
    {
        cout << "\nLibrary Book Records\n";
        cout << "-------------------------------------------------\n";
        cout << "Book ID\tBook Name\t\tAuthor\n";
        cout << "-------------------------------------------------\n";

        for (int i = 0; i < 5; i++)
        {
            cout << bookId[i] << "\t"
                 << bookName[i] << "\t\t"
                 << author[i] << endl;
        }
    }
};

int main()
{
    Library lib;

    lib.addBooks();
    lib.displayBooks();

    return 0;
}