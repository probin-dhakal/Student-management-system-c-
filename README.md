Student Management System

This is a simple Student Management System program written in C++ that allows users to manage student data, including adding, displaying, searching, updating, and deleting student records. It uses the Standard Template Library (STL) vector to store student information dynamically.

Features

Add New Student: Add a new student with their roll number, age, and name.

Display All Students: View all student records in the system.

Search Student: Search for a student by their roll number.

Update Student: Update the name and age of a student by their roll number.

Delete Student: Delete a student's record by their roll number.

Exit: Quit the program.

Requirements

A C++ compiler (e.g., GCC, Clang, or MSVC).

A terminal or command prompt to run the program.

How to Run

Clone or download the source code.

Open the terminal or command prompt in the directory containing the source code.

Compile the program using a C++ compiler. For example:

g++ -o student_management student_management.cpp

Run the compiled program:

./student_management

Usage

Upon running the program, you will see a menu with the following options:

------------------------------
  Student Management System
------------------------------
1. Add New Student
2. Display All Students
3. Search Student
4. Update Student
5. Delete Student
6. Exit
Enter Your Choice:

Enter the number corresponding to the action you want to perform.

Follow the prompts to input student details as required.

After completing an operation, you can choose to continue or exit the program.

Code Structure

Student Class

Private Members:

rollno: The roll number of the student.

age: The age of the student.

name: The name of the student.

Public Methods:

Constructor to initialize a student's data.

Getters and setters for roll number, age, and name.

displayStudent(): Display the student's details.

Functions

addNewStudent: Adds a new student to the vector.

DisplayAllStudent: Displays all students in the vector.

searchStudent: Searches for a student by their roll number.

updateStudent: Updates the details of an existing student.

deleteStudent: Deletes a student from the vector.

main Function

Handles the menu-driven interface and calls the appropriate functions based on user input.

Limitations

Roll numbers must be unique; duplicate roll numbers are not allowed.

The program does not persist data; all student records are cleared when the program exits.

Example Interaction

Adding a Student:

Enter Roll No: 101
Enter Name: John Doe
Enter Age: 20
Student added successfully...

Displaying All Students:

------- Student Found -------
  Roll No: 101
  Name   : John Doe
  Age    : 20
-------------------------------

Searching for a Student:

Enter Roll No: 101
------- Student Found -------
  Roll No: 101
  Name   : John Doe
  Age    : 20

Contributing

Feel free to fork this repository and make improvements. Pull requests are welcome!

License

This project is licensed under the MIT License. See the LICENSE file for details.

Enjoy managing student records with this simple and efficient system!

