#pragma once
#include "klient.h"
#include <string>
using namespace std;

class CBuro {
  private:
    int broi_klienti;
    string ime;
    CKlient *m;

  public:
    CBuro();
    CBuro(string);
    void AddKlient();
    void PrintKlient();
    void PrintiVsichkiKlienti();
    int ProverkaPoRegNomer(int); //Метод за проверка на съществуващ клиент по рег. номер
    int ProverkaPoEGN(long int); //Метод за проверка на съществуващ клиент по ЕГН
    void DeleteKlient(); //Метод за изтриване на клиент по зададено ЕГН
    void PrintKlientiPoStaj(); //Показва всички клиенти, които отговарят на зададения стаж
    void DummyData(); //Метод по желание. Добавя автоматично -n на брой филми.
    ~CBuro() { delete []m; } //деструктор
};
