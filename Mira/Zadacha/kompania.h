#include "polet.h"
#pragma once
#include <string>
using namespace std;

class Kompania
{
  private:
    int count;
    string name;
    Polet *m;

  public:
    Kompania(); //конструктор по подразбиране
    Kompania(string); //конструктор с параметри

    int Find(int);
    void AddPolet(); // добавя
    void PrintPoleti(); //отпечатва

    void Delete(); //изтрива по int
    void UsePointer(); // метод използващ указател
};
