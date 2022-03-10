#pragma once
#include "student.h"
#include <string>
using namespace std;

class CSchool {
  private:
    int total_students;
    string school_name;
    CStudent *m;

  public:
    CSchool();
    CSchool(string);
    void AddStudent();
    void PrintStudent();
    void PrintStudentByParams();
    void PrintAllStudents();
    void StudentsLessThanAge();
    void StudentsLessThanWeight();
    void TheHeaviestStudent();
    void DummyData();
    ~CSchool() { delete []m; } //деструктор
};
