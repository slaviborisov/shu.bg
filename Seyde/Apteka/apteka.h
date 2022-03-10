#pragma once
#include "lekarstvo.h"
#include <string>
using namespace std;

class CApteka {
  private:
    string ime;
    int broi_lekarstva;
    CLekasrtvo *m;

  public:
    CApteka();
    CApteka(string);
    void Addlekarstvo(); // Метод за добавяне на ново лекарство в аптеката
    void PrintLekarstva(); // Метод за показване на всички лекарства в аптеката
    // void PrintVsichkiLekarstva(); // Метод за отпечатване на учителския състав
    // void DeleteUchitel(); // Метод за изтриване на учител по ЕГН
    // int IsInUchSustav(string); // Метод за проверка на съществуващ учител по Име
    // int IsInUchSustav(long int); // Метод за проверка на съществуващ учител по ЕГН
    // void PrintUchiteliPoDisciplina(); // Метод за отпечатване на учителите, които преподават зададената дисциплина
    // void PrintDiscplinaPoStaj(); // Метод за отпечатване на водената дисциплина на учителя с най-голям стаж
    ~CApteka() { delete []m; } // Деструктор: изтрива динамично заделената памет
    void DummyData();
};
