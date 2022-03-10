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
    int NameriPoKatNomer(string); // Метод за проверка на налично лекарство по кат. номер
    void Addlekarstvo(); // Метод за добавяне на ново лекарство в аптеката
    void PrintLekarstva(); // Метод за показване на всички лекарства в аптеката
    void DeleteLekarstvo(); // Метод за изтриване на лекарство по кат. номер
    void PrintLekarstvaPodCena(); // Намери всички лекарсвта под въведена цена
    void PrintNaiEvtinoLekarstvo(); // Показва кат. номер на най-евтиното лекарство по въведено име
    ~CApteka() { delete []m; } // Деструктор: изтрива динамично заделената памет
};
