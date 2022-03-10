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
    void AddAnimal(); // добавя ново животно
    void PrintAnimals(); // показва всички животни
    // int NameriKolaPoRegNomer(string); //намира кола по рег. номер
    // void PrintKolaPoRegNomer(); //показва кола по рег. номер
    // void DeleteKola(); //изтрива кола по регистрационен номер
    // void PrintKoliPoSobstvenik();
    // void PrintNaiStaraKola();
    void DummyData();
    ~CZooPark() { delete []m; } //деструктор
};

