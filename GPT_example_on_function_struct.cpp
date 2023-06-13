#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    string major;
    double gpa;
};

void printStudentInfo(const Student& student) {
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Major: " << student.major << endl;
    cout << "GPA: " << student.gpa << endl;
}

int main() {
    Student s1;
    s1.name = "John Doe";
    s1.age = 20;
    s1.major = "Computer Science";
    s1.gpa = 3.8;

    Student s2;
    s2.name = "Jane Smith";
    s2.age = 21;
    s2.major = "Electrical Engineering";
    s2.gpa = 3.9;

    // Printing student information
    cout << "Student 1: " << endl;
    printStudentInfo(s1);
    cout << endl;
    cout << "Student 2: " << endl;
    printStudentInfo(s2);

    return 0;
}
