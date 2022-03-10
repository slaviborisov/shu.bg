#pragma once
#include <string>
using namespace std;

class CLekasrtvo
{
  private:
  string ime; // Име на лекарство
  string kat_nomer; // Каталожен номер на лекарство
  string razfasovka; // вид разфасовка (ампули, блистери, дражета, таблетки, пакети... )
  float cena; // Дисциплина по която преподава
  int kolichestvo; // Трудов стаж

  public:
    CLekasrtvo();
    CLekasrtvo(string, string, string, float, int);
    int operator>(CLekasrtvo); // Предефиниране на операцията >
    void Add(); // Метод за добавяне на ново лекарство
    void Print();  // Метод за отпечатване на информацията на лекарство
    string GetIme() { return ime; } //Връща името на лекасртвото
    string GetKatNomer() { return kat_nomer; } // Връща каталожния номер на лекарството
    float GetCena() { return cena; } // Въща цената на лекарството
};
