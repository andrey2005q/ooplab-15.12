// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>
#include <iostream>

struct StudentData {
    int id;
    std::string name;
    int course;
};

class Student {
private:
    std::vector<StudentData> students;

public:
    // Constructor
    Student();

    // Destructor
    ~Student();

    // Methods for input/output
    void addStudent(int id, const std::string& name, int course);
    void displayStudents() const;

    // Data processing methods
    void removeStudent(int id);
    void updateStudent(int id, const std::string& name, int course);

    // Validation methods
    bool isValidCourse(int course) const;
};

#endif
