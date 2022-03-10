#pragma once
#include "kola.h"
#include <string>
using namespace std;

class CKat {
  private:
    int broi_koli; //общ брой регистрирани автомобили
    string name;// име на КАТ
    CKola *m;// указател

  public:
    CKat();
    CKat(string);
    void AddKola(); //добавя новa кола
    int NameriKolaPoRegNomer(string); //намира кола по рег. номер
    void PrintKolaPoRegNomer(); //показва кола по рег. номер
    void PrintVsichkiKoli(); //показва всички коли
    void DeleteKola(); //изтрива кола по регистрационен номер
    void PrintKoliPoSobstvenik();
    void PrintNaiStaraKola();
    void DummyData();
    ~CKat() { delete []m; } //деструктор
};
