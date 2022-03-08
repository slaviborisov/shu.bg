#pragma once
#include <string>
using namespace std;

class CLekar
{
  private:
    unsigned int number; //идентификационен номер на лекар
    string name;//име на лекар
    unsigned int vuzrast;//възраст
    string data_na_postupvane; //дата на постъпване на работа
    string specialnost;//специалист по(медицинско направление)


  public:
    CLekar();
    CLekar(unsigned int, string, unsigned int, string, string);
    int GetNumber() { return number; };
    int GetVuzrast() { return vuzrast; }
    string GetSpecialnost() { return specialnost; }
    int operator<(CLekar); //предефиниране на оператор <
    void Add(); //добавяне на нов лекар
    void Print(); //отпечатване на лекар
};
