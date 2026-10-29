/**
 * @file example.cpp
 * @brief Demonstrates Doxygen documentation for a C++ student record program.
 * @author Ananya Siju
 * @date 2026-10-29
 */
#include <iostream>
#include <string>
#include <limits>

/** @brief Represents a student and their marks. */
class Student {
private:
    std::string name; /**< Student's full name. */
    int rollNumber;   /**< Unique roll number for this demonstration. */
    double marks;     /**< Marks on a scale from 0 to 100. */
public:
    /**
     * @brief Constructs a student record.
     * @param studentName Name of the student.
     * @param roll Student roll number.
     * @param score Marks between 0 and 100.
     */
    Student(const std::string& studentName, int roll, double score)
        : name(studentName), rollNumber(roll), marks(score) {}

    /**
     * @brief Determines whether the student passed.
     * @return true when marks are at least 40; otherwise false.
     */
    bool hasPassed() const { return marks >= 40.0; }

    /** @brief Prints the student record and pass/fail status. */
    void display() const {
        std::cout << "Name: " << name << "\nRoll number: " << rollNumber
                  << "\nMarks: " << marks << "\nResult: "
                  << (hasPassed() ? "Pass" : "Fail") << '\n';
    }
};

/**
 * @brief Reads student information and displays the record.
 * @return 0 on success; 1 for invalid input.
 */
int main() {
    std::string name;
    int roll;
    double marks;
    std::cout << "Enter student name: ";
    if (!std::getline(std::cin, name) || name.empty()) {
        std::cerr << "Invalid name.\n";
        return 1;
    }
    std::cout << "Enter roll number: ";
    if (!(std::cin >> roll) || roll <= 0) {
        std::cerr << "Invalid roll number.\n";
        return 1;
    }
    std::cout << "Enter marks (0-100): ";
    if (!(std::cin >> marks) || marks < 0 || marks > 100) {
        std::cerr << "Invalid marks.\n";
        return 1;
    }
    Student student(name, roll, marks);
    student.display();
    return 0;
}

