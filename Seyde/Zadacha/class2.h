#include "class1.h"
#pragma once
#include <string>
using namespace std;

class Class2
{
  private:
    int count;
    string name;
    Class1 *m;

  public:
    Class2(); //конструктор по подразбиране
    Class2(string); //конструктор с параметри

    int Find(int);
    void Add(); // добавя
    void Print(); //отпечатва
    void PrintAll(); //отпечатва всички

    void Delete(); //изтрива по int
    void UsePointer(); // метод използващ указател
};
