#pragma once
#include <string>
using namespace std;

class CPerson
{
  private:
  unsigned reg_id; // Регистрационен номер;
  string name; // Име
  long long personal_id; // ЕГН
  unsigned sex; // Пол
  unsigned age; // Възраст
  float weight; // Тегло
  string profession; // Професия
  string hobby; // Хоби

  public:
    CPerson();
    CPerson(unsigned, string, long long, unsigned, unsigned, float, string, string);
    long long GetPersonalID() { return personal_id; };
    string GetProfession() { return profession; };
    unsigned GetSex() { return sex; };
    float GetWeight() { return weight; };
    int operator<(CPerson); // Предефиниране на оператор >
    void Add(); // Mетод за добавяне на нов клиент
    void Print(); // Mетод за отпечатване на клиент
};
