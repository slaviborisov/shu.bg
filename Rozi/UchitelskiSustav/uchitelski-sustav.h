#pragma once
#include "uchitel.h"
#include <string>
using namespace std;

class CUSustav {
  private:
    string ime_na_uchilishte;
    int broi_zapisi;
    CUchitel *m;

  public:
    CUSustav();
    CUSustav(string);
    void AddUchitel(); // Метод за добавяне на нов учител
    void PrintUchitel(); // Метод за показване на информация на учител
    void PrintUchSustav(); // Метод за отпечатване на учителския състав
    void DeleteUchitel(); // Метод за изтриване на учител
    int IsInUchSustav(string); // Метод за проверка на съзществуващ учител по Име
    int IsInUchSustav(long int); // Метод за проверка на съзществуващ учител по ЕГН
    void PrintUchiteliPoDisciplina();
    void DummyData();
    ~CUSustav() { delete []m; } // Деструктор: изтрива динамично заделената памет
};
