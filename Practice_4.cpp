#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    static int count;   // Static data member

public:
    // Constructor
    Student() {
        count++;
        rollNo = count;
    }

    // Display student details
    void display() {
        cout << "Student Roll No: " << rollNo << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total Students Created: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.display();
    s2.display();
    s3.display();

    // Call static function using class name
    Student::showCount();

    return 0;
}