#pragma once
#include <string>
using namespace std;

class Class1
{
  private:
    int nomer1;
    string text1;
    int nomer2;
    string text2;

  public:
    Class1(); //конструктор по подразбиране
    Class1(int, string, int, string); //конструктор с параметри
    int operator>(Class1); //Предефиниране на оператор >
};
