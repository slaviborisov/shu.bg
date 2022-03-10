#pragma once
#include "animal.h"
#include <string>
using namespace std;

class CZooPark {
  private:
    int count_animals; // брой животни в зоологическата градина
    string name; // име на на зоологическа граддина
    CAnimal *m; // указател

  public:
    CZooPark();
    CZooPark(string);
    int FindAnimalByRegNumber(string); // намира животно по рег. номер
    void AddAnimal(); // добавя ново животно
    void PrintAnimals(); // показва всички животни
    void DeleteAnimal(); // изтрива животно по рег. номер
    void GetAnimalsByKind(); // показва имената и възрастта животните от даден вид
    void PrintTheOldestAnimal(); // показва най-старото животно от даден вид
    void DummyData();
    ~CZooPark() { delete []m; } //деструктор
};

