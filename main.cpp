#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private:
    int rollno;
    int age;
    string name;

public:
    // Constructor
    Student(int rollno, int age, string name) {
        this->rollno = rollno;
        this->age = age;
        this->name = name;
    }

    // Getters & Setters
    void setRollNo(int rollno) {
        this->rollno = rollno;
    }
    int getRollNo() const {
        return rollno;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() const {
        return name;
    }
    void setAge(int age) {
        this->age = age;
    }
    int getAge() const {
        return age;
    }
    void displayStudent() const {
        cout << "  Roll No: " << rollno << endl;
        cout << "  Name   : " << name << endl;
        cout << "  Age    : " << age << endl;
    }
};

// Search student
void searchStudent(vector<Student> &students) {
    int rollno;
    cout << "  Enter Roll No: ";
    cin >> rollno;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].getRollNo() == rollno) {
            cout << "------- Student Found -------" << endl;
            students[i].displayStudent();
            return;
        }
    }
    cout << "  Student not found." << endl;
}

// Display all students
void DisplayAllStudent(const vector<Student> &students) {
    if (students.empty()) {
        cout << "  No students found." << endl;
        return;
    }

    for (int i = 0; i < students.size(); i++) {
        students[i].displayStudent();
        cout << "-------------------------------" << endl;
    }
}

// Add new student function
void addNewStudent(vector<Student> &students) {
    int rollno, age;
    string name;
    cout << " Enter Roll No: ";
    cin >> rollno;

    // Check if student already exists
    for (int i = 0; i < students.size(); i++) {
        if (students[i].getRollNo() == rollno) {
            cout << " Student already exists..." << endl;
            return;
        }
    }

    cout << " Enter Name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, name);
    cout << " Enter Age: ";
    cin >> age;

    Student newStudent(rollno, age, name);
    students.push_back(newStudent);
    cout << " Student added successfully..." << endl;
}

// Update student details
void updateStudent(vector<Student> &students) {
    int rollno;
    cout << "  Enter Roll No of the student to update: ";
    cin >> rollno;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].getRollNo() == rollno) {
            cout << "------- Student Found -------" << endl;
            students[i].displayStudent();

            int newAge;
            string newName;

            cout << "  Enter New Name: ";
            cin.ignore(); // Clear the input buffer
            getline(cin, newName);
            cout << "  Enter New Age: ";
            cin >> newAge;

            students[i].setName(newName);
            students[i].setAge(newAge);

            cout << " Student details updated successfully!" << endl;
            return;
        }
    }
    cout << "  Student not found." << endl;
}

// Delete a student
void deleteStudent(vector<Student> &students) {
    int rollno;
    cout << "  Enter Roll No of the student to delete: ";
    cin >> rollno;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].getRollNo() == rollno) {
            cout << "------- Student Found -------" << endl;
            students[i].displayStudent();

            students.erase(students.begin() + i);
            cout << " Student deleted successfully!" << endl;
            return;
        }
    }
    cout << "  Student not found." << endl;
}

int main() {
    vector<Student> students;

    char choice;
    do {
        system("cls"); // Clear screen (works on Windows)
        int op;
        cout << " ------------------------------" << endl;
        cout << "   Student Management System" << endl;
        cout << " ------------------------------" << endl;
        cout << " 1. Add New Student" << endl;
        cout << " 2. Display All Students" << endl;
        cout << " 3. Search Student" << endl;
        cout << " 4. Update Student" << endl;
        cout << " 5. Delete Student" << endl;
        cout << " 6. Exit" << endl;
        cout << " Enter Your Choice: ";
        cin >> op;

        switch (op) {
            case 1:
                addNewStudent(students);
                break;
            case 2:
                DisplayAllStudent(students);
                break;
            case 3:
                searchStudent(students);
                break;
            case 4:
                updateStudent(students);
                break;
            case 5:
                deleteStudent(students);
                break;
            case 6:
                exit(0);
            default:
                cout << " Invalid option. Please try again." << endl;
        }

        cout << " Do you want to continue [Y/N]? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
