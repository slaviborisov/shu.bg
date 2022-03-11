#pragma once
#include <string>
using namespace std;

class Class1
{
  private:
    int number;
    string text;

  public:
    Class1(); //конструктор по подразбиране
    Class1(int, string); //конструктор с параметри
    int operator>(Class1); //предефиниране на оператор >
    int GetNumber() { return number; }
    string GetText() { return text; }

    void Add(); //добавя
    void Print(); //отпечатва
};
