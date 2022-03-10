#pragma once
#include <string>
using namespace std;

class CKola
{
  private:
    string marka; //марка на колата
    string cvqt;//цвят на колата
    string reg_nomer;//регистрационен номенр на колата
    int godina; //година на производство
    string sobstvenik;//собственик на колата

  public:
    CKola();
    CKola(string, string, string, int, string);
    string GetRegNomer() { return reg_nomer; }
    string GetMarka() { return marka; }
    string GetCvqt() { return cvqt; }
    string GetSobstvenik() { return sobstvenik; }
    int operator<(CKola); //предефиниране на оператор <
    void Add(); //добавяне на нов лекар
    void Print(); //отпечатване на лекар
};
