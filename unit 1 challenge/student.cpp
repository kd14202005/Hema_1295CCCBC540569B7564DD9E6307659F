#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    std::string roll_number;
    float cgpa;
};

// Comparator function to sort students in descending order of CGPA
bool compareByCGPA(const Student& a, const Student& b) {
    return a.cgpa > b.cgpa;
}

// Function to sort students based on CGPA
void sort_students(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), compareByCGPA);
}

int main() {
    // Example usage
    std::vector<Student> students = {
        {"Alice", "101", 3.8},
        {"Bob", "102", 3.6},
        {"Charlie", "103", 3.9},
    };

    sort_students(students);

    // Print the sorted list
    for (const Student& student : students) {
        std::cout << "Name: " << student.name << ", Roll Number: " << student.roll_number << ", CGPA: " << student.cgpa << std::endl;
    }

    return 0;
}