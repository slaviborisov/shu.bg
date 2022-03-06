#pragma once
#include <string>
using namespace std;

class CUchitel
{
  private:
  string ime; // Име на учител
  long int egn; // ЕГН на учител
  int vuzrast; // Възраст на учител
  string disciplina; // Дисциплина по която преподава
  int trudov_staj; // Трудов стаж

  public:
    CUchitel();
    CUchitel(string, long int, int, string, int);
    int operator>(CUchitel); // Предефиниране на операцията >
    void Add(); // Метод за добавяне на нов учител
    void Print();  // Метод за отпечатване на информацията за избран учител
    string Ime() { return ime; }
    long int EGN() { return egn; }
};
