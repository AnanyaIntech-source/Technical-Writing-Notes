/**
 * @file example.cpp
 * @brief Student Record Management example using Doxygen.
 * @details Demonstrates documentation of a C++ class,
 *          its methods, parameters, and return values.
 * @version 1.0
 */

#include <iostream>
#include <string>
#include <limits>
using namespace std;

/**
 * @class Student
 * @brief Represents a student's academic record.
 *
 * Stores the student's name, roll number,
 * and marks in three subjects.
 */
class Student {
private:
    string name;
    int rollNumber;
    float marks[3];

public:
    /**
     * @brief Initializes a student record.
     */
    Student() : name(""), rollNumber(0), marks{0, 0, 0} {}

    /**
     * @brief Accepts student information from the user.
     */
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject "
                 << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    /**
     * @brief Calculates the average marks.
     * @return Average marks across three subjects.
     */
    float calculateAverage() const {
        float total = 0;

        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }

        return total / 3;
    }

    /**
     * @brief Displays the student record.
     */
    void displayDetails() const {
        cout << "\n--- Student Record ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;

        for (int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1
                 << " Marks: " << marks[i] << endl;
        }

        cout << "Average Marks: "
             << calculateAverage() << endl;
    }
};

/**
 * @brief Entry point of the program.
 * @return 0 when execution completes successfully.
 */
int main() {
    Student student;

    student.inputDetails();
    student.displayDetails();

    return 0;
}
