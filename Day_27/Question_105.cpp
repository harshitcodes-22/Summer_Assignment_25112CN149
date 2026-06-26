#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s[5];
    int n;

    cout << "===== Student Record Management System =====" << endl;
    cout << "Enter the number of students (Max 5): ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;
        cout << "Roll Number: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks: ";
        cin >> s[i].marks;
    }
    cout << "\n===== Student Records =====" << endl;
    cout << "Roll No\tName\tMarks" << endl;

    for (int i = 0; i < n; i++) {
        cout << s[i].rollNo << "\t"
             << s[i].name << "\t"
             << s[i].marks << endl;
    }

    return 0;
}