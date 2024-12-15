// Student.cpp
#include "Student.h"

Student::Student() {}

Student::~Student() {}

void Student::addStudent(int id, const std::string& name, int course) {
    if (!isValidCourse(course)) {
        std::cerr << "Invalid course number!" << std::endl;
        return;
    }
    students.push_back({id, name, course});
}

void Student::displayStudents() const {
    for (const auto& student : students) {
        std::cout << "ID: " << student.id << ", Name: " << student.name << ", Course: " << student.course << std::endl;
    }
}

void Student::removeStudent(int id) {
    auto it = std::remove_if(students.begin(), students.end(), [id](const StudentData& s) {
        return s.id == id;
    });
    if (it != students.end()) {
        students.erase(it, students.end());
        std::cout << "Student with ID " << id << " removed." << std::endl;
    } else {
        std::cerr << "Student with ID " << id << " not found!" << std::endl;
    }
}

void Student::updateStudent(int id, const std::string& name, int course) {
    for (auto& student : students) {
        if (student.id == id) {
            if (!isValidCourse(course)) {
                std::cerr << "Invalid course number!" << std::endl;
                return;
            }
            student.name = name;
            student.course = course;
            std::cout << "Student with ID " << id << " updated." << std::endl;
            return;
        }
    }
    std::cerr << "Student with ID " << id << " not found!" << std::endl;
}

bool Student::isValidCourse(int course) const {
    return course > 0 && course <= 5; // Example: valid courses are 1 to 5
}
