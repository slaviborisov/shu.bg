#include "class1.h"
#pragma once
#include <string>
using namespace std;

class Class2
{
  private:
    int nomer1;
    string text1;

  public:
    Class2(); //конструктор по подразбиране
    Class2(int, string); //конструктор с параметри
    int operator>(Class1); //Предефиниране на оператор >
    void AddSomething(); // добави нещо
};
