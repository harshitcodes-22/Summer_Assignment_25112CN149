#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo[5];
    string name[5];
    float marks[5];

public:
    void input()
    {
        cout << "Enter details of 5 students:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "\nStudent " << i + 1 << endl;

            cout << "Enter Roll Number: ";
            cin >> rollNo[i];

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name[i]);

            cout << "Enter Marks: ";
            cin >> marks[i];
        }
    }

    void display()
    {
        cout << "\nStudent Records\n";
        cout << "\n";
        cout << "Roll No\tName\t\tMarks\n";
        cout << "\n";

        for (int i = 0; i < 5; i++)
        {
            cout << rollNo[i] << "\t"
                 << name[i] << "\t\t"
                 << marks[i] << endl;
        }
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}