#pragma once
#include <string>
using namespace std;

class CStudent
{
  private:
  string name; // Име
  int grade; // Клас
  string section; // Паралалека
  int number; // Номер в класа
  int age; // Възраст
  int height; // Ръст
  int weight; // Тегло

  public:
    CStudent();
    CStudent(string, int, string, int, int, int, int);
    string GetName() { return name; };
    int GetGrade() { return grade; }
    string GetSection() { return section; }
    int GetNumber() { return number; }
    int GetAge() { return age; }
    int GetWeight() { return weight; }
    int operator>(CStudent); // Предефиниране на оператор >
    void Add(); // Mетод за добавяне на нов ученик
    void Print(); // Mетод за отпечатване на ученик
};
