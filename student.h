#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int id;
    float grade;

public:
    Student();
    Student(std::string name, int id, float grade);

    void setName(std::string name);
    void setId(int id);
    void setGrade(float grade);

    std::string getName() const;
    int getId() const;
    float getGrade() const;

    void display() const;
};

#endif
