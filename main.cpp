#include <iostream>
#include <vector>
#include <fstream>
#include "student.h"

std::vector<Student> students;

void loadFromFile() {
    std::ifstream inFile("students.txt");
    std::string name;
    int id;
    float grade;
    while (inFile >> id >> name >> grade) {
        students.push_back(Student(name, id, grade));
    }
    inFile.close();
}

void saveToFile() {
    std::ofstream outFile("students.txt");
    for (const auto& s : students) {
        outFile << s.getId() << " " << s.getName() << " " << s.getGrade() << std::endl;
    }
    outFile.close();
}

void addStudent() {
    std::string name;
    int id;
    float grade;
    std::cout << "Enter ID, Name, Grade: ";
    std::cin >> id >> name >> grade;
    students.push_back(Student(name, id, grade));
}

void displayAll() {
    for (const auto& s : students) {
        s.display();
    }
}

void menu() {
    int choice;
    do {
        std::cout << "\n1. Add Student\n2. Show All\n3. Save & Exit\nChoose: ";
        std::cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: saveToFile(); break;
            default: std::cout << "Invalid choice!\n";
        }
    } while (choice != 3);
}

int main() {
    loadFromFile();
    menu();
    return 0;
}
