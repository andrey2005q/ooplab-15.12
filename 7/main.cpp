// main.cpp
#include "Student.h"

int main() {
    Student studentManager;

    studentManager.addStudent(1, "Alice", 2);
    studentManager.addStudent(2, "Bob", 3);

    std::cout << "Initial list of students:" << std::endl;
    studentManager.displayStudents();

    studentManager.updateStudent(1, "Alice Smith", 4);
    studentManager.removeStudent(2);

    std::cout << "Final list of students:" << std::endl;
    studentManager.displayStudents();

    return 0;
}
