#include "student.h"
#include <iostream>

Student::Student() {
    name = "";
    id = 0;
    grade = 0.0;
}

Student::Student(std::string name, int id, float grade) {
    this->name = name;
    this->id = id;
    this->grade = grade;
}

void Student::setName(std::string name) {
    this->name = name;
}

void Student::setId(int id) {
    this->id = id;
}

void Student::setGrade(float grade) {
    this->grade = grade;
}

std::string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}

float Student::getGrade() const {
    return grade;
}

void Student::display() const {
    std::cout << "ID: " << id << " | Name: " << name << " | Grade: " << grade << std::endl;
}
