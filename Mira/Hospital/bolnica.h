#pragma once
#include "lekar.h"
#include <string>
using namespace std;

class CBolnica {
  private:
    int broi_lekari;
    string name;
    CLekar *m;

  public:
    CBolnica();
    CBolnica(string);
    void AddLekar(); //добавя нов лекар
    void PrintLekari(); //показва всички лекари
    void DeleteLekar(); //изтрива лекар по идентификационен номер
    int NameriLekarPoNomer(unsigned int); // намира лекар по идентификационен номер
    void PrintLekarPoNomer();
    void PrintLekariNadVuzrast();
    void PrintNaiMladPediatur();
    void DummyData();
    ~CBolnica() { delete []m; } //деструктор
};
