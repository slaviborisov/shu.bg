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
    void PrintKolaPoRegNomer(); //показва всички коли
    void PrintVsichkiKoli();
    int NameriKolaPoRegNomer(string); //намира кола по регистрационен номер
    void DeleteKola(); //изтрива кола по регистрационен номер
    void PrintPoSobstvenik();
    void PrintNaiStaraKola();
    void DummyData();
    ~CKat() { delete []m; } //деструктор
};
