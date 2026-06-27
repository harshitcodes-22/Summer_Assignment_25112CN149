#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    int bookId;
    string bookName;
    string author;

public:
    
    void getData()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void showData()
    {
        cout << "\n----- Library Book Details -----" << endl;
        cout << "Book ID    : " << bookId << endl;
        cout << "Book Name  : " << bookName << endl;
        cout << "Author     : " << author << endl;
    }
};

int main()
{
    Library book;

    book.getData();
    book.showData();

    return 0;
}