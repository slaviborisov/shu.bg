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
    void PrintUchitel(); // Метод за показване на информация на учител по въведено Име
    void PrintUchSustav(); // Метод за отпечатване на учителския състав
    void DeleteUchitel(); // Метод за изтриване на учител по ЕГН
    int IsInUchSustav(string); // Метод за проверка на съществуващ учител по Име
    int IsInUchSustav(long int); // Метод за проверка на съществуващ учител по ЕГН
    void PrintUchiteliPoDisciplina(); // Метод за отпечатване на учителите, които преподават зададената дисциплина
    void PrintDiscplinaPoStaj(); // Метод за отпечатване на водената дисциплина на учителя с най-голям стаж
    void DummyData();
    ~CUSustav() { delete []m; } // Деструктор: изтрива динамично заделената памет
};
